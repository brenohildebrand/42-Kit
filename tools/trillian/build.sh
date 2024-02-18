#!/bin/bash

# This script will call 'trillian make' and 'make build' meaning it will
# recreate the Makefile and build the project for the latest release. 

PROJECT=$OLDPWD
FRAMEWORK=$PWD

source $FRAMEWORK/config/.env

anime() {
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

echo $trillian

cd $PROJECT
$trillian make
# make build &
# anime $! 'building...'