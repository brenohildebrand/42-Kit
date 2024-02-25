#!/bin/bash

PROJECT=$OLDPWD
FRAMEWORK=$PWD

if [ "$FRAMEWORK" != "$PROJECT" ]; then
	cd $PROJECT
fi

trillian build
if [ $? -ne 0 ]; then
	exit 1
fi
for test in $(find ./build/tests/bin -type f -exec echo {} \;); do
	name=$(basename $test)
	printf "%-16s " "$name:"
	valgrind --leak-check=full --error-exitcode=1 $test > /dev/null 2>&1
	if [ $? -eq 0 ]; then
		printf "\033[1;32mOK\033[0m\n"
	else
		printf "\033[1;31mKO\033[0m\n"
	fi
done