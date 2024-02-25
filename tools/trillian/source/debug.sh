#!/bin/bash

PROJECT=$OLDPWD
FRAMEWORK=$PWD

if [ "$PROJECT" = "$FRAMEWORK" ]; then
	exit 0;
fi

cd $PROJECT
trillian build
name=$(basename "$PROJECT" | sed 's/^ft_//')
gdb --tui --args ./build/debug/bin/$name ${@:1}