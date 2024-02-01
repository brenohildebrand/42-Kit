#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

shopt -s nullglob

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -DDEBUG -c -g ../source/framework/*.c ../source/types/**/*.c -iquote ../source/framework $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/libframework.a ../objects/*.o
else
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -DDEBUG -c -g ../source/framework/*.c ../source/types/**/*.c -iquote ../source/framework $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/libframework.a ../objects/*.o

	cd $PROJECTPWD
	NAME=$(basename $PROJECTPWD | sed "s/^ft_//")
	mkdir -p ./build
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -DDEBUG -c -g ../source/processes/**/*.c ../source/types/**/*.c $(find ../source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') -iquote "${FRAMEWORKPWD}/source/framework" $(find "${FRAMEWORKPWD}/source/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	gcc -Wall -Wextra -Werror -o "../build/$NAME" -g ../objects/*.o $FRAMEWORKPWD/build/libframework.a
fi

shopt -u nullglob