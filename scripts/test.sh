#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	for FILEPWD in ./tests/core/**/*.c; do
		NAME=$(basename $FILEPWD | sed 's/\.c$//')
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/core/**/*.c ./source/types/**/*.c $(find ./source/core -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 "./build/${NAME}"
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
			rm "./build/${NAME}"
		else
			printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
		fi
	done
	for FILEPWD in ./tests/types/**/*.c; do
		NAME=$(basename $FILEPWD | sed 's/\.c$//')
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/core/**/*.c ./source/types/**/*.c $(find ./source/core -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 "./build/${NAME}"
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
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/processes/**/*.c ./source/types/**/*.c ${FRAMEWORKPWD}/source/core/**/*.c ${FRAMEWORKPWD}/source/types/**/*.c $(find ./source/processes -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/core" -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 "./build/${NAME}"
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
			rm "./build/${NAME}"
		else
			printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
		fi
	done
	for FILE in ./tests/types/**/*; do
		NAME=$(basename $FILEPWD | sed 's/\.c$//')
		gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD ./source/processes/**/*.c ./source/types/**/*.c ${FRAMEWORKPWD}/source/core/**/*.c ${FRAMEWORKPWD}/source/types/**/*.c $(find ./source/processes -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/core" -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -mindepth 1 -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
		valgrind --quiet --error-exitcode=1 "./build/${NAME}"
		if [ $? -eq 0 ]; then
			printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
			rm "./build/${NAME}"
		else
			printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
		fi
	done
fi