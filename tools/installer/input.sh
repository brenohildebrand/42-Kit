#!/bin/bash

get_character() {
	local character
	read -rsn1 character
	echo $character
	return
}

type() {
    local text=""
    local speed="30"
    local newline="false"

    while [[ $# -gt 0 ]]; do
        case "$1" in
            --speed=*)
                speed=$(bc <<< "scale=2; 1/${1#*=}")
                shift
                ;;
            --newline)
                newline="true"
                shift
                ;;
            --text=*)
                text="${1#*=}"
                shift
                ;;
            *)
                echo "Error: Unknown option $1"
                exit 1
                ;;
        esac
    done

    stty -echo
    # Loop through each character in the text
    for (( i=0; i<${#text}; i++ )); do
        # Print the current character without newline
        echo -n "${text:$i:1}"
        # Wait for the specified time based on typing speed
        sleep $speed
    done

    # if newline is true print a newline
    if [[ "$newline" == "true" ]]; then
        echo
    fi

    stty echo
    read -t 1 -N 100 discard
}

text="hello world!"

