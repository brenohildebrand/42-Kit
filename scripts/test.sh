#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	for FILE in ./tests/core/**/*; do
		gcc -Wall -Wextra -Werror -o ./build/test -g $FILE $(find ./source/core -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 ./build/test
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" $(basename "$FILE:")
		else
			printf "%-20s\t\e[31mKO\e[0m\n" $(basename "$FILE:")
		fi
	done
	for FILE in ./tests/types/**/*; do
		gcc -Wall -Wextra -Werror -o ./build/test -g $FILE $(find ./source/core -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 ./build/test
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" $(basename "$FILE:")
		else
			printf "%-20s\t\e[31mKO\e[0m\n" $(basename "$FILE:")
		fi
	done
else
	cd $PROJECTPWD
	for FILE in ./tests/processes/**/*; do
		gcc -Wall -Wextra -Werror -o ./build/test -g $FILE $(find ./source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/core" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 ./build/test
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" $(basename "$FILE:")
		else
			printf "%-20s\t\e[31mKO\e[0m\n" $(basename "$FILE:")
		fi
	done
	for FILE in ./tests/types/**/*; do
		gcc -Wall -Wextra -Werror -o ./build/test -g $FILE $(find ./source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/core" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 ./build/test
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" $(basename "$FILE:")
		else
			printf "%-20s\t\e[31mKO\e[0m\n" $(basename "$FILE:")
		fi
	done
fi