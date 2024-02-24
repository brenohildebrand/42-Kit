#!/bin/bash

# This script will build and run the project in the current mode.

PROJECT=$OLDPWD
FRAMEWORK=$PWD

echo "TODO"

if [[ "$PROJECT" == "$FRAMEWORK" ]]; then
	exit 0
fi

cd $PROJECT
trillian build
name=$(basename $PROJECT | sed "s/^ft_//")
./build/default/bin/${name}" "${@:1}"