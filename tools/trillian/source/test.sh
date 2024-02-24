#!/bin/bash

PROJECT=$OLDPWD
FRAMEWORK=$PWD

echo "TODO"

exit 0

# use valgrind and run only the tests for the project itself of for the framework itself

cd $FRAMEWORK
trillian build
for test in $(find ./build/tests/bin -type f -exec echo {} \;); do
	name=$(basename $test)
	printf "%-16s " "$name:"
	$test > /dev/null 2>&1
	if [ $? -eq 0 ]; then
		printf "\033[1;32mOK\033[0m\n"
	else
		printf "\033[1;31mKO\033[0m\n"
	fi
done