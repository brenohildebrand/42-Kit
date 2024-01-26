#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

shopt -s nullglob

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -c -g ../source/framework/**/*.c ../source/types/**/*.c $(find ../source/framework -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/ft_framework.a ../objects/*.o
else
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -c -g ../source/framework/**/*.c ../source/types/**/*.c $(find ../source/framework -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/ft_framework.a ../objects/*.o

	cd $PROJECTPWD
	NAME=$(basename $PROJECTPWD)
	mkdir -p ./build
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -c -g -e "$NAME" ../source/processes/**/*.c ../source/types/**/*.c $(find ../source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/framework" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	gcc -Wall -Wextra -Werror -o "../build/$(basename $PROJECTPWD)" -g ../objects/*.o 

	# gcc -include <path-to-include>
fi

shopt -u nullglob