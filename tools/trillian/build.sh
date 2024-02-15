#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

shopt -s nullglob

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -include ft_framework.h -c -g ../source/base/processes/**/*.c ../source/base/types/**/*.c ../source/processes/**/*.c ../source/types/**/*.c -iquote ../includes $(find ../source/base/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/base/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/libframework.a ../objects/*.o
else
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -include ft_framework.h -c -g ../source/base/processes/**/*.c ../source/base/types/**/*.c ../source/processes/**/*.c ../source/types/**/*.c -iquote ../includes $(find ../source/base/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/base/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/libframework.a ../objects/*.o

	cd $PROJECTPWD
	NAME=$(basename $PROJECTPWD | sed "s/^ft_//")
	mkdir -p ./build
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -include ft_framework.h -D$NAME=main -c -g ../source/processes/**/*.c ../source/types/**/*.c $(find ../source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ../source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') -iquote "${FRAMEWORKPWD}/includes" $(find "${FRAMEWORKPWD}/source/base/processes" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/base/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/processes" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	gcc -Wall -Wextra -Werror -o "../build/$NAME" -g ../objects/*.o $FRAMEWORKPWD/build/libframework.a
fi

shopt -u nullglob