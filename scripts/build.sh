#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -c -g ./source/core/**/*.c ./source/types/**/*.c $(find ./source/core -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/ft_framework.a ../objects/*.o
else
	cd $FRAMEWORKPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -c -g ./source/core/**/*.c ./source/types/**/*.c $(find ./source/core -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	ar rcs ../build/ft_framework.a ../objects/*.o

	cd $PROJECTPWD
	mkdir -p ./objects
	cd ./objects
	gcc -Wall -Wextra -Werror -c -g ./source/processes/**/*.c ./source/types/**/*.c $(find ./source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/core" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	gcc -Wall -Extra -Werror -o $("./build/$(basename $PROJECTPWD)") -g ./objects/*.o 
fi