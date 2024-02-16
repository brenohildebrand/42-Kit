#!/bin/bash

cat << EOF
Trillian is a tool from ft_framework.
If you want to learn more go to https://github.com/brenohildebrand/ft_framework.

$(echo -e "\e[1m")Usage:$(echo -e "\e[0m") trillian command [arguments]

$(echo -e "\e[1m")Commands:$(echo -e "\e[0m")
	help			Display this information.
	run
	check
	debug			
	build				
	release				
	test			
	submit			
	version			Display current version.
EOF