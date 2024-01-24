#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD

norminette ../source
cd $PROJECTPWD
echo 'TODO: run norminette on project source.'
