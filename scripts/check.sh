#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

norminette ../source

cd $PROJECTPWD
echo 'TODO: run norminette on project source.'
