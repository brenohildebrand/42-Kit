#!/bin/bash

PROJECT=$OLDPWD
FRAMEWORK=$PWD

test()
{
	cd $FRAMEWORK
	trillian make
	output=$(make test 2>&1)
	if [ $? -ne 0 ]; then
		echo
		echo "$output"
	fi
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
}

load() 
{
    local pid=$1
    local message=$2
    local delay=0.1
    local chars="/-\|"
	local index=0

    while ps -p $pid > /dev/null; do
        printf "\r[%c] %s" "${chars:$index:1}" "$message"
        sleep $delay
		index=$(( (index + 1) % ${#chars} ))
	done

	printf "\r\033[K"
}

test

exit 0