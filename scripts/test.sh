#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

framework_test() {
	FILEPWD=${1}
	NAME=$(basename $FILEPWD | sed 's/\.c$//')
	gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD -include ft_framework.h ./source/base/processes/**/*.c ./source/base/types/**/*.c ./source/processes/**/*.c ./source/types/**/*.c -iquote ./includes $(find ./source/base/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/base/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	valgrind --quiet --leak-check=full --show-leak-kinds=all --error-exitcode=1 "./build/${NAME}"
	if [ $? -eq 0 ]; then
		printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
		rm "./build/${NAME}"
	else
		printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
	fi
}

project_test() {
	FILEPWD=${1}
	NAME=$(basename $FILEPWD | sed 's/\.c$//')
	gcc -Wall -Wextra -Werror -o "./build/${NAME}" -g $FILEPWD -include ft_framework.h ./source/processes/**/*.c ./source/types/**/*.c $(find ./source/processes -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find ./source/types -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') -iquote "${FRAMEWORKPWD}/includes" $(find "${FRAMEWORKPWD}/source/base/processes" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/base/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/processes" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//') $(find "${FRAMEWORKPWD}/source/types" -type d -exec echo -iquote {} \; | tr '\n' ' ' | sed 's/.$//')
	valgrind --quiet --leak-check=full --show-leak-kinds=all --error-exitcode=1 "./build/${NAME}"
	if [ $? -eq 0 ]; then
		printf "%-20s\t\e[32mOK\e[0m\n" "${NAME}:"
		rm "./build/${NAME}"
	else
		printf "%-20s\t\e[31mKO\e[0m\n" "${NAME}:"
	fi
}

shopt -s nullglob

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	cd $FRAMEWORKPWD
	if [ $# -gt 0 ]; then
		for arg in "$@"; do
			FILEPWD=$(find ./tests -type f -name "${arg}.c")
			if [[ -n $FILEPWD ]]; then
				framework_test $FILEPWD
			else
				echo "There is no test file called $arg."
			fi
		done
	else
		for FILEPWD in ./tests/base/processes/**/*.c; do
			framework_test $FILEPWD
		done
		for FILEPWD in ./tests/base/types/**/*.c; do
			framework_test $FILEPWD
		done
		for FILEPWD in ./tests/processes/**/*.c; do
			framework_test $FILEPWD
		done
		for FILEPWD in ./tests/types/**/*.c; do
			framework_test $FILEPWD
		done
	fi
else
	cd $PROJECTPWD
	if [ $# -gt 0 ]; then
		for arg in "$@"; do
			FILEPWD=$(find ./tests -type f -name "${arg}.c")
			if [[ -n $FILEPWD ]]; then
				project_test $FILEPWD
			else
				echo "There is no test file called $arg."
			fi
		done
	else
		for FILEPWD in ./tests/processes/**/*.c; do
			project_test $FILEPWD
		done
		for FILEPWD in ./tests/types/**/*.c; do
			project_test $FILEPWD
		done
	fi
fi

shopt -u nullglob