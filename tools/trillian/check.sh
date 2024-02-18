#!/bin/bash

# This script will check the norm on the source code of the ft_framework or
# on the current project.

PROJECT=$OLDPWD
FRAMEWORK=$PWD

if [ "$PROJECT" == "$FRAMEWORK" ]; then
	cd $FRAMEWORK
	norminette ./source
else
	cd $PROJECT
	norminette ./source
fi