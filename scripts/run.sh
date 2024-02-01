#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

cd $PROJECTPWD
NAME=$(basename $PROJECTPWD | sed "s/^ft_//")
./build/${NAME}