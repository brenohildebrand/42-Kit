#!/bin/bash

# Change to the framework directory.
ROOT=$(dirname $(dirname $(dirname $0)))
cd $ROOT

# Set up environment variables.
# sed -i "s/^ROOT=.*/ROOT=\"$(echo $ROOT | sed 's/\//\\\//g')\"/" $ROOT/config/.env

# If an argument was not provided show a hint.
if [ $# -eq 0 ]; then
    list_of_hints=(
        "Looks like you forgot to tell me what to do. Try 'trillian help'."
        "You think you can't tell me what to do. You're wrong! Try 'trillian help'."
        "Don't you know how to use me? Try 'trillian help'."
        "Are you kidding me? Try 'trillian help'."
    )
    chosen_index=$(( RANDOM % ${#list_of_hints[@]} ))
    chosen_hint="${list_of_hints[$chosen_index]}"
    echo $chosen_hint
    exit 1
fi

# Look for a command matching the first argument.
case $1 in
    "build")
        ./tools/trillian/build.sh "${@:2}"
        ;;
    "check")
        ./tools/trillian/check.sh "${@:2}"
        ;;
    "debug")
        ./tools/trillian/debug.sh "${@:2}"
        ;;
    "help")
        ./tools/trillian/help.sh "${@:2}"
        ;;
    "init")
        ./tools/trillian/init.sh "${@:2}"
        ;;
    "run")
        ./tools/trillian/run.sh "${@:2}"
        ;;
    "submit")
        ./tools/trillian/submit.sh "${@:2}"
        ;;
    "test")
        ./tools/trillian/test.sh "${@:2}"
        ;;
    "version")
        ./tools/trillian/version.sh "${@:2}"
        ;;
    *)
        echo "The command '$1' does not exist. Try 'trillian help'."
        exit 1
        ;;
esac