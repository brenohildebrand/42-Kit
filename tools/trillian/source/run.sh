#!/bin/bash

# This script will run the latest build of the project. If it doesn't exist it
# will call 'trillian build' before running it.

PROJECT=$OLDPWD
FRAMEWORK=$PWD

if [[ "$PROJECT" == "$FRAMEWORK" ]]; then
	exit 0
fi

cd $PROJECT
NAME=$(basename $PROJECTPWD | sed "s/^ft_//")
TARGET="./build/releases/latest/bin/${NAME}"
if [ ! -f $TARGET ]; then
	trillian build
fi

$TARGET "${@:1}"