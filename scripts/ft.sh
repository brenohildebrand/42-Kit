#!/bin/bash

script_dir="$(dirname "$0")"
cd ${script_dir}

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
    "create")
        ./create.sh "${@:2}"
        ;;
    "ft")
        ./ft.sh "${@:2}"
        ;;
    "submit")
        ./submit.sh "${@:2}"
        ;;
    "test")
        ./test.sh "${@:2}"
        ;;
    *)
        echo "Unknown command: $1"
        exit 1
        ;;
esac