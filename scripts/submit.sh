#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

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
	echo '
	# TODO: Makefile
	' > submit/lib/ft_framework/Makefile

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

NAME = build/${basename $PROJECTPWD | sed "s/^ft_//"}
FRAMEWORK = libs/ft_framework/build/libframework.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	$(find $PROJECTPWD/source/processes -type f -name "*.c" -exec echo {} \\ \; | sed 's/ \\$//')
	$(find $PROJECTPWD/source/types -type f -name "*.c" -exec echo {} \\ \; | sed 's/ \\$//')

OBJECTS = \
	$(find $PROJECTPWD/source/processes -type f -name "*.c" -exec echo {} \\ \; | sed 's/ \\$//' | sed 's/.c \\$/.o \\/' | sed 's/.c$/.o/')
	$(find $PROJECTPWD/source/types -type f -name "*.c" -exec echo {} \\ \; | sed 's/ \\$//' | sed 's/.c \\$/.o \\/' | sed 's/.c$/.o/')

INCLUDES = \
	-include ft_framework.h \

	-iquote lib/ft_framework/base/processes/** \
	-iquote lib/ft_framework/base/types/** \
	-iquote lib/ft_framework/processes/** \
	-iquote lib/ft_framework/types/** \
	-iquote source/processes/** \
	-iquote source/types/** \

all: \$(NAME)

\$(NAME): \$(FRAMEWORK) \$(OBJECTS)
	@cc -o \$(NAME) \$(OBJECTS) \$(FRAMEWORK)
	
\$(FRAMEWORK):
	\$(MAKE) -C libs/ft_framework

clean:
	\$(RM) \$(OBJECTS)

fclean: clean
	\$(RM) \$(NAME)

re: fclean all

%.o: %.c
    \$(CC) \$(CFLAGS) \$(INCLUDES) -c $< -o $@

.PHONY: \$(NAME) all clean fclean re
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