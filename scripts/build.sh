#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD

# build ft_framework
mkdir -p ../objects
cd ../objects
gcc -Wall -Wextra -Werror -c -g ../source/core/**/*.c ../source/types/**/*.c $(find ../source/core -type d -exec echo -iquote{} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote{} \; | tr '\n' ' ' | sed 's/.$//')
ar rcs ../build/ft_framework.a ../objects/*.o

# then build the current project if any
cd $PROJECTPWD
echo 'TODO: build the project.'