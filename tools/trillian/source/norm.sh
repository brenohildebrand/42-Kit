#!/bin/bash

PROJECT=$OLDPWD
FRAMEWORK=$PWD

output=$(norminette source)
if [ $? -ne 0 ]; then
	echo "$output" | grep -v 'OK!$'
fi