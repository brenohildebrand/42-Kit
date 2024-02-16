#!/bin/bash

# This script is responsible for generating and updating the Makefile
# for ft_framework.

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

NAME="libtrillian.a"

CC="gcc"
CFLAGS="-Wall -Wextra -Werror -std=c99"
# CPATHS="$(find ./source -mindepth -type d -name "*.h" -exec basename {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"

SOURCES="$(find ./source -type f -name "*.c" -exec echo {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
HEADERS="$(find ./source -type f -name "*.h" -exec basename {} \; | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
OBJECTS="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.o/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"
DEPENDENCIES="$(find ./source -type f -name "*.c" -exec basename {} \; | sed 's/\.c$/.d/' | sed 's/.*/\t& \\/' | sed '$s/ \\$//' | sed '0,/^/s//\\\n/')"

# RULES=""

cat << EOF > ./MakeMake
$HEADER

NAME = $NAME

CC = $CC
CFLAGS = $CFLAGS

SOURCES = $SOURCES

HEADERS = $HEADERS

OBJECTS = $OBJECTS

DEPENDENCIES = $DEPENDENCIES

BUILD_DIR = build
DEBUG_DIR = build/debug
RELEASES_DIR = build/releases
LATEST_DIR = build/releases/latest

-include \$(DEPENDENCIES)

all: build

build: \$(OBJECTS)
	@mkdir -p \$(RELEASES_DIR)/latest
	@ar rcs \$(RELEASES_DIR)/latest/bin/latest \$(OBJECTS)

debug: CFLAGS += -DDEBUG -g
debug: \$(OBJECTS)
	@ar rcs \$(DEBUG_DIR)/bin/\$(NAME) \$(OBJECTS)

release: CFLAGS += -03
release: \$(OBJECTS)
	@mkdir -p \$(RELEASES_DIR)/\$(RELEASE_NAME)
	@ar rcs \$(RELEASES_DIR)/\$(RELEASE_NAME)/bin/\$(RELEASE_NAME)-v\${RELEASE_VERSION} \$(OBJECTS)

\$(NAME): build

clean:
	@\$(RM) \$(OBJECTS)

fclean: clean
	@\$(RM) \$(NAME)

re: fclean all

.PHONY: all build debug release \$(NAME) clean fclean re

# Rules to compile the source code into object files.
EOF