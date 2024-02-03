#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

shopt -s nullglob

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	for FILEPWD in ./tests/framework/*.c; do
		NAME=$(basename $FILEPWD | sed 's/\.c$//')
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/framework/*.c ./source/types/**/*.c -iquote ./source/framework $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --leak-check=full --show-leak-kinds=all --error-exitcode=1 "./build/${NAME}"
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
			rm "./build/${NAME}"
		else
			printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
		fi
	done
	for FILEPWD in ./tests/types/**/*.c; do
		NAME=$(basename $FILEPWD | sed 's/\.c$//')
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/framework/*.c ./source/types/**/*.c -iquote ./source/framework $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --leak-check=full --show-leak-kinds=all --error-exitcode=1 "./build/${NAME}"
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
			rm "./build/${NAME}"
		else
			printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
		fi
	done
else
	cd $PROJECTPWD
	for FILEPWD in ./tests/processes/**/*; do
		NAME=$(basename $FILEPWD | sed 's/\.c$//')
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/processes/**/*.c ./source/types/**/*.c ${FRAMEWORKPWD}/source/framework/*.c ${FRAMEWORKPWD}/source/types/**/*.c $(find ./source/processes -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') -iquote ${FRAMEWORKPWD}/source/framework $(find "${FRAMEWORKPWD}/source/types" -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --leak-check=full --show-leak-kinds=all --error-exitcode=1 "./build/${NAME}"
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
			rm "./build/${NAME}"
		else
			printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
		fi
	done
	for FILEPWD in ./tests/types/**/*; do
		NAME=$(basename $FILEPWD | sed 's/\.c$//')
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/processes/**/*.c ./source/types/**/*.c ${FRAMEWORKPWD}/source/framework/*.c ${FRAMEWORKPWD}/source/types/**/*.c $(find ./source/processes -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') -iquote ${FRAMEWORKPWD}/source/framework $(find "${FRAMEWORKPWD}/source/types" -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --leak-check=full --show-leak-kinds=all --error-exitcode=1 "./build/${NAME}"
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
			rm "./build/${NAME}"
		else
			printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
		fi
	done
fi

shopt -u nullglob