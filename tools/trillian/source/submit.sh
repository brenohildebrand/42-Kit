#!/bin/bash

# This script will submit your code to vogsphere. It will create a folder
# called submit and will put your code there. It will check for norminette
# and will create a proper Makefile for you.

echo "TODO"

PROJECT=$OLDPWD
FRAMEWORK=$PWD

if [[ "$PROJECT" == "$FRAMEWORK" ]]; then
	exit 0
fi

cd $PROJECT

trillian check

mkdir -p submit
mkdir -p submit/build
mkdir -p submit/build/
mkdir -p submit/lib
mkdir -p submit/lib/ft_framework
mkdir -p submit/lib/ft_framework/build
mkdir -p submit/lib/ft_framework/build/debug
mkdir -p submit/lib/ft_framework/build/releases
mkdir -p submit/lib/ft_framework/build/debug/bin
mkdir -p submit/lib/ft_framework/build/debug/objects
mkdir -p submit/lib/ft_framework/build/debug/dependencies
mkdir -p submit/lib/ft_framework/build/releases/latest
mkdir -p submit/lib/ft_framework/build/releases/latest/bin
mkdir -p submit/lib/ft_framework/build/releases/latest/objects
mkdir -p submit/lib/ft_framework/build/releases/latest/dependencies

cp -r $FRAMEWORK/source submit/lib/ft_framework/
cp -r $PROJECT/source submit/

# generate Makefiles

exit 0

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

NAME=$(basename $PROJECTPWD | sed "s/^ft_//")
if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	echo "You're in the ft_framework directory. Nothing done."
	exit 0
else
	cd $FRAMEWORKPWD
	norminette ./source
	if [ $? -ne 0 ]; then
		exit 1
	fi

	cd $PROJECTPWD
	norminette ./source
	if [ $? -ne 0 ]; then
		exit 1
	fi

	mkdir -p submit

	mkdir -p submit/lib
	mkdir -p submit/lib/ft_framework
	
	cp -r ${FRAMEWORKPWD}/source submit/lib/ft_framework/
	cp -r ${FRAMEWORKPWD}/includes submit/lib/ft_framework/
	echo "# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: $(date +'%Y/%m/%d %H:%M:%S') by bhildebr          #+#    #+#              #
#    Updated: $(date +'%Y/%m/%d %H:%M:%S') by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = build/libframework.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \\
$(find $FRAMEWORKPWD/source/base/processes -type f -exec echo -e '\t'{} \\ \; | sed 's/.*ft_framework\//\t/' | sed '/.*\.h.*/d')
$(find $FRAMEWORKPWD/source/base/types -type f -exec echo -e '\t'{} \\ \; | sed 's/.*ft_framework\//\t/' | sed '/.*\.h.*/d')
$(find $FRAMEWORKPWD/source/processes -type f -exec echo -e '\t'{} \\ \; | sed 's/.*ft_framework\//\t/' | sed '/.*\.h.*/d')
$(find $FRAMEWORKPWD/source/types -type f -exec echo -e '\t'{} \\ \; | sed 's/.*ft_framework\//\t/' | sed '/.*\.h.*/d' | sed '$s/ \\//')

OBJECTS = \\
$(find $FRAMEWORKPWD/source/base/processes -type f -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\tobjects\/& \\/' | sed '/.*\.h.*/d')
$(find $FRAMEWORKPWD/source/base/types -type f -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\tobjects\/& \\/' | sed '/.*\.h.*/d')
$(find $FRAMEWORKPWD/source/processes -type f -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\tobjects\/& \\/' | sed '/.*\.h.*/d')
$(find $FRAMEWORKPWD/source/types -type f -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\tobjects\/& \\/' | sed '/.*\.h.*/d' | sed '$s/ \\//')

INCLUDES = \\
	-include ft_framework.h \\
	-iquote includes \\
$(find $FRAMEWORKPWD/source/base/processes -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// /')
$(find $FRAMEWORKPWD/source/base/types -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// /')
$(find $FRAMEWORKPWD/source/processes -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// /')
$(find $FRAMEWORKPWD/source/types -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// /' | sed '$s/ \\//')

all: \$(NAME)

\$(NAME): \$(OBJECTS)
	ar rcs \$(NAME) \$(OBJECTS)

directories:
	mkdir -p build
	mkdir -p objects

clean:
	\$(RM) \$(OBJECTS)

fclean: clean
	\$(RM) \$(NAME)

re: fclean all

%.o: %.c
	\$(CC) \$(CFLAGS) \$(INCLUDES) -c $< -o $@

.PHONY: \$(NAME) all directories clean fclean re

" > submit/lib/ft_framework/Makefile

	cp -r ./source ./submit/
	echo "# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: $(date +'%Y/%m/%d %H:%M:%S') by bhildebr          #+#    #+#              #
#    Updated: $(date +'%Y/%m/%d %H:%M:%S') by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = build/${NAME}
FRAMEWORK = lib/ft_framework/build/libframework.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \\
$(find $PROJECTPWD/source/processes -type f -name "*.c" -exec echo -e '\t'{} \\ \; | $(echo sed 's/.*ft_'${NAME}'\//\t/'))
$(find $PROJECTPWD/source/types -type f -name "*.c" -exec echo -e '\t'{} \\ \; | sed '$s/ \\$//' | $(echo sed 's/.*ft_'${NAME}'\//\t/'))

OBJECTS = \\
$(find $PROJECTPWD/source/processes -type f -name "*.c" -exec basename {} \; | sed 's/^/\tobjects\//' | sed 's/\.c$/.o \\/')
$(find $PROJECTPWD/source/types -type f -name "*.c" -exec basename {} \; | sed 's/^/\tobjects\//' | sed 's/\.c$/.o \\/' | sed '$s/ \\//')

INCLUDES = \\
	-include ft_framework.h \\
	-iquote lib/ft_framework/includes \\
$(find $FRAMEWORKPWD/source/base/processes -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// lib\/ft_framework\//')
$(find $FRAMEWORKPWD/source/base/types -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// lib\/ft_framework\//')
$(find $FRAMEWORKPWD/source/processes -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// lib\/ft_framework\//')
$(find $FRAMEWORKPWD/source/types -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_framework\// lib\/ft_framework\//')
$(find $PROJECTPWD/source/processes -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_'${NAME}'\// /')
$(find $PROJECTPWD/source/types -mindepth 1 -type d -exec echo -e '\t'-iquote {} \\ \; | sed 's/ .*ft_'${NAME}'\// /' | sed '$s/ \\$//')

all: \$(NAME)

\$(NAME): \$(FRAMEWORK) \$(OBJECTS)
	@cc -o \$(NAME) \$(OBJECTS) \$(FRAMEWORK)

\$(FRAMEWORK):
	\$(MAKE) -C lib/ft_framework

directories:
	mkdir -p build
	mkdir -p objects

clean:
	\$(RM) \$(OBJECTS)

fclean: clean
	\$(RM) \$(NAME)

re: fclean all

%.o: %.c
	\$(CC) \$(CFLAGS) \$(INCLUDES) -c $< -o $@

.PHONY: \$(NAME) all directories clean fclean re
" > submit/Makefile

	if [ $# -eq 1 ]; then
		cd submit
		git init
		git remote add origin ${1}
		git add .
		git commit -m 'ez'
		git push
	fi
fi