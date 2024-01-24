#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

echo "TODO: submit.sh"

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD

cd $PROJECTPWD
mkdir -p submit

mkdir -p submit/lib
mkdir -p submit/lib/ft_framework
mkdir -p submit/lib/ft_framework/source
mkdir -p submit/lib/ft_framework/objects
cp -r ${SCRIPTPWD}/../source submit/lib/ft_framework/source

cp -r ./source ./submit/source

touch Makefile
echo '

' > Makefile

cd submit
git init
git remote add origin ${1}
git add .
git commit -m 'ez'
git push