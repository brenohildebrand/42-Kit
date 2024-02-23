#!/bin/bash

# This script is responsible for generating and updating the Makefiles for your
# projects and also for ft_framework itself.

PROJECT=$OLDPWD
FRAMEWORK=$PWD

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
CFLAGS="-Wall -Wextra -Werror -std=c99"
CPATHS="\\
	-include framework.h \\
$(find ./source -type f -name '*.h' -exec basename {} \; | sed 's/.*/\t-include & \\/' | sed '/framework\.h/d')
$(find ./source -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// /' | sed '$s/ \\//')"

SOURCES="$(find ./source -type f -name "*.c" -exec echo {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
HEADERS="$(find ./source -type f -name "*.h" -exec basename {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
OBJECTS="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
DEPENDENCIES="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.d/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"

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

DEBUG_DIR = ./build/debug
DEFAULT_DIR = ./build/default
TESTS_DIR = ./build/tests

DEBUG_OBJECTS = \$(addprefix \$(DEBUG_DIR)/objects/, \$(OBJECTS))
DEBUG_DEPENDENCIES = \$(addprefix \$(DEBUG_DIR)/dependencies/, \$(DEPENDENCIES))

DEFAULT_OBJECTS = \$(addprefix \$(DEFAULT_DIR)/objects/, \$(OBJECTS))
DEFAULT_DEPENDENCIES = \$(addprefix \$(DEFAULT_DIR)/dependencies/, \$(DEPENDENCIES))

TESTS_OBJECTS = \$(addprefix \$(TESTS_DIR)/objects/, \$(OBJECTS))
TESTS_DEPENDENCIES = \$(addprefix \$(TESTS_DIR)/dependencies/, \$(DEPENDENCIES))

all: build

\$(NAME): build

debug: \$(DEBUG)
\$(DEBUG): CFLAGS += -DDEBUG -g
\$(DEBUG): \$(DEBUG_OBJECTS) | \$(DEBUG_DIR)
	@ar rcs \$(DEBUG_DIR)/bin/\$(NAME) \$?

build: \$(DEFAULT)
\$(DEFAULT): \$(DEFAULT_OBJECTS) | \$(DEFAULT_DIR)
	@ar rcs \$(DEFAULT_DIR)/bin/\$(NAME) \$?

test: build \$(TESTS)
\$(TESTS): \$(TESTS_OBJECTS) | \$(TESTS_DIR)

clean:
	@\$(RM) \$(DEBUG_OBJECTS)
	@\$(RM) \$(DEBUG_DEPENDENCIES)
	@\$(RM) \$(DEFAULT_OBJECTS)
	@\$(RM) \$(DEFAULT_DEPENDENCIES)

fclean: clean
	@\$(RM) \$(DEBUG_DIR)/bin/\$(NAME)
	@\$(RM) \$(DEFAULT_DIR)/bin/\$(NAME)

re: fclean all

.PHONY: all build debug release \$(NAME) clean fclean re

-include \$(DEBUG_DEPENDENCIES)
-include \$(DEFAULT_DEPENDENCIES)
-include \$(TESTS_DEPENDENCIES)

$DEFAULT_RULES
$DEBUG_RULES
$TESTS_RULES
EOF

# Exit if trillian was called from the ft_framework folder.
if [ "$PROJECT" == "$FRAMEWORK" ]; then
	exit 0
fi

source ./config/.env

cd $PROJECT

HEADER="\
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: $(printf "%-42s\n" "$ft_username <$ft_username@student.42.fr>") +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: $(date +'%Y/%m/%d %H:%M:%S') by $(printf "%-17s\n" "$ft_username") #+#    #+#              #
#    Updated: $(date +'%Y/%m/%d %H:%M:%S') by $(printf "%-16s\n" "$ft_username") ###   ########.fr        #
#                                                                              #
# **************************************************************************** #"

NAME=$(basename "$PROJECT" | sed 's/^ft_//')

DEFAULT_LIBFRAMEWORK="$FRAMEWORK/build/default/bin/libframework.a"
DEBUG_LIBFRAMEWORK="$FRAMEWORK/build/debug/bin/libframework.a"

DEBUG="./build/debug/bin/$NAME"
DEFAULT="./build/default/bin/$NAME"

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c99 -D$NAME=main"
CPATHS="\\
	-include memtree.h \\
	-include any.h \\
$(find $FRAMEWORK/source -type f -name '*.h' -exec basename {} \; | sed 's/.*/\t-include & \\/' | sed '/memtree\.h/d' | sed '/any\.h/d')
$(find $FRAMEWORK/source -type d -exec echo -e '\t'-iquote {} \\ \;)
$(find $PROJECT/source -type d -exec echo -e '\t'-iquote {} \\ \; | sed '$s/ \\//')"

SOURCES="$(find ./source -type f -name "*.c" -exec echo {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
HEADERS="$(find ./source -type f -name "*.h" -exec basename {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
OBJECTS="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
DEPENDENCIES="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.d/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"

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

DEBUG_DIR = ./build/debug
DEFAULT_DIR = ./build/default

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
\$(DEBUG): \$(DEBUG_OBJECTS) | \$(DEBUG_DIR)
	@\$(CC) \$(CFLAGS) -o \$(DEBUG_DIR)/bin/\$(NAME) \$(DEBUG_OBJECTS) \$(DEBUG_LIBFRAMEWORK)

build: \$(DEFAULT_LIBFRAMEWORK) \$(DEFAULT)
\$(DEFAULT): \$(DEFAULT_OBJECTS) | \$(DEFAULT_DIR)
	@\$(CC) \$(CFLAGS) -o \$(DEFAULT_DIR)/bin/\$(NAME) \$(DEFAULT_OBJECTS) \$(DEFAULT_LIBFRAMEWORK)

clean:
	@\$(RM) \$(DEBUG_OBJECTS)
	@\$(RM) \$(DEBUG_DEPENDENCIES)
	@\$(RM) \$(DEFAULT_OBJECTS)
	@\$(RM) \$(DEFAULT_DEPENDENCIES)

fclean: clean
	@\$(RM) \$(DEBUG_DIR)/bin/\$(NAME)
	@\$(RM) \$(DEFAULT_DIR)/bin/\$(NAME)

re: fclean all

.PHONY: all build debug release \$(NAME) clean fclean re

-include \$(DEBUG_DEPENDENCIES)
-include \$(DEFAULT_DEPENDENCIES)

$DEBUG_RULES
$DEFAULT_RULES
EOF