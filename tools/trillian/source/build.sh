#!/bin/bash

PROJECT=$OLDPWD
FRAMEWORK=$PWD

# Clean up the deleted files.
shopt -s nullglob

for object in build/**/objects/*; do
	name=$(basename $object | sed 's/.o$/.c/')
	find source -type f -name "$name" | grep -q "."
	if [ $? -ne 0 ]; then
		rm -f $object
	fi
done

for dependency in build/**/dependencies/*; do
	name=$(basename $dependency | sed 's/.d$/.c/')
	find source -type f -name "$name" | grep -q "."
	if [ $? -ne 0 ]; then
		rm -f $dependency
	fi
done

for test in build/tests/bin/*; do
	name=$(basename $test | sed 's/.*/&.c/')
	find tests -type f -name "$name" | grep -q "."
	if [ $? -ne 0 ]; then
		rm -f $test
	fi
done

shopt -u nullglob

# Update the .vscode configuration.
cat << EOF > .vscode/c_cpp_properties.json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
				$(find source -type d -exec echo {} \; | sed "s/.*/\t\t\t\t\"\${workspaceFolder}\/&\",/" | sed '1s/^\t\t\t\t//' | sed '$s/,$//')
            ],
			"forcedInclude": [
				"\${workspaceFolder}/source/types/framework/framework.h",
				$(find source -type f -name "*.h" -exec echo {} \; | sed "s/.*/\t\t\t\t\"\${workspaceFolder}\/&\",/" | sed '1s/^\t\t\t\t//' | sed '$s/,$//')
			],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c99"
        }
    ],
    "version": 4
}
EOF

cat << EOF > .vscode/launch.json
{
    "version": "0.2.0",
    "configurations": [
		$(find tests -type f -exec basename {} \; | sed "s/.c$//" | sed "s/.*/\t\t{\n\
			\"name\": \"&\",\n\
			\"type\": \"cppdbg\",\n\
			\"request\": \"launch\",\n\
			\"program\": \"\${workspaceFolder}\/build\/tests\/bin\/&\",\n\
			\"args\": [],\n\
			\"stopAtEntry\": true,\n\
			\"cwd\": \"\${workspaceFolder}\",\n\
			\"environment\": [],\n\
            \"externalConsole\": false,\n\
            \"MIMode\": \"gdb\",\n\
            \"setupCommands\": [\n\
                {\n\
                    \"description\": \"Enable pretty-printing for gdb\",\n\
                    \"text\": \"-enable-pretty-printing\",\n\
                    \"ignoreFailures\": true\n\
                }\n\
            ],\n\
            \"preLaunchTask\": \"build\"\n\
		},/" | sed '1s/^\t\t//' | sed '$s/,$//')
    ]
}
EOF

cat << EOF > .vscode/tasks.json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "trillian build",
            "args": [],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
EOF

# Generate Makefile.
cd $FRAMEWORK
HEADER="\
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: $(date +'%Y/%m/%d %H:%M:%S') by bhildebr          #+#    #+#              #
#    Updated: $(date +'%Y/%m/%d %H:%M:%S') by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #"

NAME="libframework.a"

DEFAULT="./build/default/bin/$NAME"
DEBUG="./build/debug/bin/$NAME"

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c99 -g"
CPATHS="\\
	-include framework.h \\
$(find ./source -type f -name '*.h' -exec basename {} \; | sed 's/.*/\t-include & \\/' | sed '/framework\.h/d')
$(find ./source -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// /' | sed '$s/ \\//')"

SOURCES="$(find ./source -type f -name "*.c" -exec echo {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
HEADERS="$(find ./source -type f -name "*.h" -exec basename {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
OBJECTS="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
DEPENDENCIES="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.d/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
TESTS="$(find ./tests -type f -name "*.c" -exec basename {} \; | sed 's/\.c$//' | sed 's/.*/\tbuild\/tests\/bin\/& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
TESTS_OBJECTS="$(find ./tests -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\tbuild\/tests\/objects\/& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
TESTS_DEPENDENCIES="$(find ./tests -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.d/' | sed 's/.*/\tbuild\/tests\/dependencies\/& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"

for source in $(find ./source -type f -name "*.c" -exec echo {} \;); do
	object=$(basename $source | sed 's/\.c/.o/')
	dependency=$(basename $source | sed 's/\.c/.d/')

	default_object="\$(DEFAULT_DIR)/objects/$object"
	default_dependency="\$(DEFAULT_DIR)/dependencies/$dependency"

	debug_object="\$(DEBUG_DIR)/objects/$object"
	debug_dependency="\$(DEBUG_DIR)/dependencies/$dependency"

	DEFAULT_RULES+="\
$default_object: $source
	@\$(CC) \$(CFLAGS) \$(CPATHS) -MMD -MF $default_dependency -c $source -o $default_object

"
	DEBUG_RULES+="\
$debug_object: $source
	@\$(CC) \$(CFLAGS) \$(CPATHS) -MMD -MF $debug_dependency -c $source -o $debug_object

"
done

for test in $(find ./tests -type f -name "*.c" -exec echo {} \;); do
	bin=$(basename $test | sed 's/\.c//')
	object=$(basename $test | sed 's/\.c/.o/')
	dependency=$(basename $test | sed 's/\.c/.d/')

	test_bin="\$(TESTS_DIR)/bin/$bin"
	test_object="\$(TESTS_DIR)/objects/$object"
	test_dependency="\$(TESTS_DIR)/dependencies/$dependency"

	TESTS_RULES+="\
$test_object: $test
	@\$(CC) \$(CFLAGS) \$(CPATHS) -MMD -MF $test_dependency -c $test -o $test_object
	@\$(CC) \$(CFLAGS) \$(CPATHS) $test_object \$(DEFAULT) -o $test_bin

"
done

cat << EOF > ./Makefile
$HEADER

# This Makefile was automatically generated by Trillian.
# See the source code to learn more.

NAME = $NAME

DEBUG = $DEBUG
DEFAULT = $DEFAULT

CC = $CC
CFLAGS = $CFLAGS
CPATHS = $CPATHS

SOURCES = $SOURCES

OBJECTS = $OBJECTS

DEPENDENCIES = $DEPENDENCIES

TESTS = $TESTS

TESTS_OBJECTS = $TESTS_OBJECTS

TESTS_DEPENDENCIES = $TESTS_DEPENDENCIES

DEBUG_DIR = ./build/debug
DEFAULT_DIR = ./build/default
TESTS_DIR = ./build/tests

DEBUG_OBJECTS = \$(addprefix \$(DEBUG_DIR)/objects/, \$(OBJECTS))
DEBUG_DEPENDENCIES = \$(addprefix \$(DEBUG_DIR)/dependencies/, \$(DEPENDENCIES))

DEFAULT_OBJECTS = \$(addprefix \$(DEFAULT_DIR)/objects/, \$(OBJECTS))
DEFAULT_DEPENDENCIES = \$(addprefix \$(DEFAULT_DIR)/dependencies/, \$(DEPENDENCIES))

all: build

\$(NAME): build

debug: \$(DEBUG)
\$(DEBUG): CFLAGS += -DDEBUG
\$(DEBUG): \$(DEBUG_OBJECTS) | \$(DEBUG_DIR)
	@ar rcs \$(DEBUG_DIR)/bin/\$(NAME) \$?

build: \$(DEFAULT)
\$(DEFAULT): \$(DEFAULT_OBJECTS) | \$(DEFAULT_DIR)
	@ar rcs \$(DEFAULT_DIR)/bin/\$(NAME) \$?

tests: build \$(TESTS)
\$(TESTS): \$(TESTS_OBJECTS) | \$(TESTS_DIR)

\$(TESTS_OBJECTS): \$(DEFAULT_OBJECTS)

clean:
	@\$(RM) \$(DEBUG_OBJECTS)
	@\$(RM) \$(DEBUG_DEPENDENCIES)
	@\$(RM) \$(DEFAULT_OBJECTS)
	@\$(RM) \$(DEFAULT_DEPENDENCIES)
	@\$(RM) \$(TESTS_OBJECTS)
	@\$(RM) \$(TESTS_DEPENDENCIES)

fclean: clean
	@\$(RM) \$(DEBUG_DIR)/bin/\$(NAME)
	@\$(RM) \$(DEFAULT_DIR)/bin/\$(NAME)
	@\$(RM) \$(TESTS)

re: fclean all

.PHONY: all build debug release \$(NAME) clean fclean re

-include \$(DEBUG_DEPENDENCIES)
-include \$(DEFAULT_DEPENDENCIES)
-include \$(TESTS_DEPENDENCIES)

$DEFAULT_RULES
$DEBUG_RULES
$TESTS_RULES
EOF

# Build framework in all modes.
output=$(make build 2>&1)
if [ $? -ne 0 ]; then
	echo "$output"
	exit 1
fi
output=$(make debug 2>&1)
if [ $? -ne 0 ]; then
	echo "$output"
	exit 1
fi
output=$(make tests 2>&1)
if [ $? -ne 0 ]; then
	echo "$output"
	exit 1
fi

# Exit if the project is actually the framework.
if [ "$PROJECT" == "$FRAMEWORK" ]; then
	exit 0
fi

#############
## PROJECT ##
#############
cd $PROJECT

# Clean up the deleted files.
shopt -s nullglob

for object in build/**/objects/*; do
	name=$(basename $object)
	find source -type f -name "$name" | grep -q "."
	if [ $? -ne 0 ]; then
		rm -f $object
	fi
done

for dependency in build/**/dependencies/*; do
	name=$(basename $dependency)
	find source -type f -name "$name" | grep -q "."
	if [ $? -ne 0 ]; then
		rm -f $dependency
	fi
done

for test in build/tests/bin/*; do
	name=$(basename $test)
	find tests -type f -name "$name" | grep -q "."
	if [ $? -ne 0 ]; then
		rm -f $test
	fi
done

shopt -u nullglob

# Update the .vscode configuration.
cat << EOF > .vscode/c_cpp_properties.json
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
				$(find $FRAMEWORK/source -type d -exec echo {} \; | sed "s/.*/\t\t\t\t\"&\",/" | sed '1s/^\t\t\t\t//')
				$(find $FRAMEWORK/source -type d -exec echo {} \; | sed "s/.*/\t\t\t\t\"&\",/" | sed '1s/^\t\t\t\t//' | sed '$s/,$//')
            ],
			"forcedInclude": [
				"$FRAMEWORK/source/types/framework/framework.h",
				$(find $FRAMEWORK/source -type f -name "*.h" -exec echo {} \; | sed "s/.*/\t\t\t\t\"&\",/" | sed '1s/^\t\t\t\t//' | sed '$s/,$//')
			],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c99"
        }
    ],
    "version": 4
}
EOF

cat << EOF > .vscode/launch.json
{
    "version": "0.2.0",
    "configurations": [
		$(find tests -type f -exec basename {} \; | sed "s/.c$//" | sed "s/.*/\t\t{\n\
			\"name\": \"&\",\n\
			\"type\": \"cppdbg\",\n\
			\"request\": \"launch\",\n\
			\"program\": \"\${workspaceFolder}\/build\/tests\/bin\/&\",\n\
			\"args\": [],\n\
			\"stopAtEntry\": true,\n\
			\"cwd\": \"\${workspaceFolder}\",\n\
			\"environment\": [],\n\
            \"externalConsole\": false,\n\
            \"MIMode\": \"gdb\",\n\
            \"setupCommands\": [\n\
                {\n\
                    \"description\": \"Enable pretty-printing for gdb\",\n\
                    \"text\": \"-enable-pretty-printing\",\n\
                    \"ignoreFailures\": true\n\
                }\n\
            ],\n\
            \"preLaunchTask\": \"build\"\n\
		},/" | sed '1s/^\t\t//' | sed '$s/,$//')
    ]
}
EOF

cat << EOF > .vscode/tasks.json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "trillian build",
            "args": [],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
EOF

# Generate Makefile.
source ./config/.env

HEADER="\
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: $(printf "%-42s\n" "$username <$username@student.42.fr>") +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: $(date +'%Y/%m/%d %H:%M:%S') by $(printf "%-17s\n" "$username") #+#    #+#              #
#    Updated: $(date +'%Y/%m/%d %H:%M:%S') by $(printf "%-16s\n" "$username") ###   ########.fr        #
#                                                                              #
# **************************************************************************** #"

NAME=$(basename "$PROJECT" | sed 's/^ft_//')

DEFAULT_LIBFRAMEWORK="$FRAMEWORK/build/default/bin/libframework.a"
DEBUG_LIBFRAMEWORK="$FRAMEWORK/build/debug/bin/libframework.a"

DEFAULT="./build/default/bin/$NAME"
DEBUG="./build/debug/bin/$NAME"

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c99 -g"
CPATHS="\
	-include framework.h \\
$(find $FRAMEWORK/source -type f -name '*.h' -exec basename {} \; | sed 's/.*/\t-include & \\/' | sed '/framework\.h/d' )
$(find $FRAMEWORK/source -type d -exec echo -e '\t'-iquote {} \\ \;)
$(find $PROJECT/source -type d -exec echo -e '\t'-iquote {} \\ \; | sed '$s/ \\//')"

SOURCES="$(find ./source -type f -name "*.c" -exec echo {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
HEADERS="$(find ./source -type f -name "*.h" -exec basename {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
OBJECTS="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\t& \\/' | sed '0,/^/s//\\\n/')"
OBJECTS+="
	main.o"
DEPENDENCIES="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.d/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
TESTS="$(find ./tests -type f -name "*.c" -exec basename {} \; | sed 's/\.c$//' | sed 's/.*/\tbuild\/tests\/bin\/& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
TESTS_OBJECTS="$(find ./tests -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\tbuild\/tests\/objects\/& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
TESTS_DEPENDENCIES="$(find ./tests -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.d/' | sed 's/.*/\tbuild\/tests\/dependencies\/& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"

for source in $(find ./source -type f -name "*.c" -exec echo {} \;); do
	object=$(basename $source | sed 's/\.c/.o/')
	dependency=$(basename $source | sed 's/\.c/.d/')

	default_object="\$(DEFAULT_DIR)/objects/$object"
	default_dependency="\$(DEFAULT_DIR)/dependencies/$dependency"

	debug_object="\$(DEBUG_DIR)/objects/$object"
	debug_dependency="\$(DEBUG_DIR)/dependencies/$dependency"

	DEFAULT_RULES+="\
$default_object: $source
	@\$(CC) \$(CFLAGS) \$(CPATHS) -MMD -MF $default_dependency -c $source -o $default_object

"
	DEBUG_RULES+="\
$debug_object: $source
	@\$(CC) \$(CFLAGS) \$(CPATHS) -MMD -MF $debug_dependency -c $source -o $debug_object

"
done

source=$(find ./source -type f -name "$NAME.c" -exec echo {} \;)
DEFAULT_RULES+="\
\$(DEFAULT_DIR)/objects/main.o: $source
	@\$(CC) \$(CFLAGS) \$(CPATHS) -D$NAME=main -c $source -o \$(DEFAULT_DIR)/objects/main.o

"
DEBUG_RULES+="\
\$(DEBUG_DIR)/objects/main.o: $source
	@\$(CC) \$(CFLAGS) \$(CPATHS) -D$NAME=main -c $source -o \$(DEBUG_DIR)/objects/main.o

"

for test in $(find ./tests -type f -name "*.c" -exec echo {} \;); do
	bin=$(basename $test | sed 's/\.c//')
	object=$(basename $test | sed 's/\.c/.o/')
	dependency=$(basename $test | sed 's/\.c/.d/')

	test_bin="\$(TESTS_DIR)/bin/$bin"
	test_object="\$(TESTS_DIR)/objects/$object"
	test_dependency="\$(TESTS_DIR)/dependencies/$dependency"

	TESTS_RULES+="\
$test_object: $test
	@\$(CC) \$(CFLAGS) \$(CPATHS) -MMD -MF $test_dependency -c $test -o $test_object
	@\$(CC) \$(CFLAGS) \$(CPATHS) $test_object \$(filter-out \$(DEFAULT_DIR)/objects/main.o, \$(DEFAULT_OBJECTS)) \$(DEFAULT_LIBFRAMEWORK) -o $test_bin

"
done

cat << EOF > $PROJECT/Makefile
$HEADER

# This Makefile was automatically generated by Trillian.
# See the source code to learn more.

NAME = $NAME

DEBUG_LIBFRAMEWORK = $DEBUG_LIBFRAMEWORK
DEFAULT_LIBFRAMEWORK = $DEFAULT_LIBFRAMEWORK

DEBUG = $DEBUG
DEFAULT = $DEFAULT

CC = $CC
CFLAGS = $CFLAGS
CPATHS = $CPATHS

SOURCES = $SOURCES

HEADERS = $HEADERS

OBJECTS = $OBJECTS

DEPENDENCIES = $DEPENDENCIES

TESTS = $TESTS

TESTS_OBJECTS = $TESTS_OBJECTS

TESTS_DEPENDENCIES = $TESTS_DEPENDENCIES

DEBUG_DIR = ./build/debug
DEFAULT_DIR = ./build/default
TESTS_DIR = ./build/tests

DEBUG_OBJECTS = \$(addprefix \$(DEBUG_DIR)/objects/, \$(OBJECTS))
DEBUG_DEPENDENCIES = \$(addprefix \$(DEBUG_DIR)/dependencies/, \$(DEPENDENCIES))

DEFAULT_OBJECTS = \$(addprefix \$(DEFAULT_DIR)/objects/, \$(OBJECTS))
DEFAULT_DEPENDENCIES = \$(addprefix \$(DEFAULT_DIR)/dependencies/, \$(DEPENDENCIES))

all: build

\$(NAME): build

\$(DEBUG_LIBFRAMEWORK):
	@make debug -C $FRAMEWORK

\$(DEFAULT_LIBFRAMEWORK):
	@make -C $FRAMEWORK

debug: \$(DEBUG_LIBFRAMEWORK) \$(DEBUG)
\$(DEBUG): CFLAGS += -DDEBUG -g
\$(DEBUG): \$(filter-out \$(DEBUG_DIR)/objects/$NAME.o, \$(DEBUG_OBJECTS)) | \$(DEBUG_DIR)
	@\$(CC) \$(CFLAGS) -o \$(DEBUG_DIR)/bin/\$(NAME) \$(filter-out \$(DEBUG_DIR)/objects/$NAME.o, \$(DEBUG_OBJECTS)) \$(DEBUG_LIBFRAMEWORK)

build: \$(DEFAULT_LIBFRAMEWORK) \$(DEFAULT)
\$(DEFAULT): \$(filter-out \$(DEFAULT_DIR)/objects/$NAME.o, \$(DEFAULT_OBJECTS)) | \$(DEFAULT_DIR)
	@\$(CC) \$(CFLAGS) -o \$(DEFAULT_DIR)/bin/\$(NAME) \$(filter-out \$(DEFAULT_DIR)/objects/$NAME.o, \$(DEFAULT_OBJECTS)) \$(DEFAULT_LIBFRAMEWORK)

tests: build \$(TESTS)
\$(TESTS): \$(TESTS_OBJECTS) | \$(TESTS_DIR)

\$(TESTS_OBJECTS): \$(DEFAULT_OBJECTS)

clean:
	@\$(RM) \$(DEBUG_OBJECTS)
	@\$(RM) \$(DEBUG_DEPENDENCIES)
	@\$(RM) \$(DEFAULT_OBJECTS)
	@\$(RM) \$(DEFAULT_DEPENDENCIES)
	@\$(RM) \$(TESTS_OBJECTS)
	@\$(RM) \$(TESTS_DEPENDENCIES)

fclean: clean
	@\$(RM) \$(DEBUG_DIR)/bin/\$(NAME)
	@\$(RM) \$(DEFAULT_DIR)/bin/\$(NAME)
	@\$(RM) \$(TESTS)

re: fclean all

.PHONY: all build debug release \$(NAME) clean fclean re

-include \$(DEBUG_DEPENDENCIES)
-include \$(DEFAULT_DEPENDENCIES)
-include \$(TESTS_DEPENDENCIES)

$DEBUG_RULES
$DEFAULT_RULES
$TESTS_RULES
EOF

# Build project in all modes.
output=$(make build 2>&1)
if [ $? -ne 0 ]; then
	echo "$output"
	exit 1
fi
output=$(make debug 2>&1)
if [ $? -ne 0 ]; then
	echo "$output"
	exit 1
fi
output=$(make tests 2>&1)
if [ $? -ne 0 ]; then
	echo "$output"
	exit 1
fi