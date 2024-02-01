#!/bin/bash

PROJECTPWD=$PWD
SCRIPTPWD=$(dirname $0)
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

cd $SCRIPTPWD

# Check if an argument is provided
if [ $# -eq 0 ]; then
    echo "No arguments provided."
    exit 1
fi

# Parse the first argument
case $1 in
    "build")
        ./build.sh "${@:2}"
        ;;
    "check")
        ./check.sh "${@:2}"
        ;;
    "debug")
        ./debug.sh "${@:2}"
        ;;
    "init")
        ./init.sh "${@:2}"
        ;;
    "run")
        ./run.sh "${@:2}"
        ;;
    "submit")
        ./submit.sh "${@:2}"
        ;;
    "test")
        ./test.sh "${@:2}"
        ;;
    "version")
        ./version.sh "${@:2}"
        ;;
    *)
        echo "Unknown command: $1"
        exit 1
        ;;
esac