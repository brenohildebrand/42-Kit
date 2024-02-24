#!/bin/bash

# This script will show information about how to use trillian.

cat << EOF
$(echo -e "\e[1m")Usage:$(echo -e "\e[0m") trillian command [arguments]

$(echo -e "\e[1m")Description:$(echo -e "\e[0m")
Trillian is a tool to manage projects using the ft_framework.
If you want to learn more go to https://github.com/brenohildebrand/ft_framework.

$(echo -e "\e[1m")Commands:$(echo -e "\e[0m")
$(echo -e "\e[1m")help:$(echo -e "\e[0m")
Display this information.

$(echo -e "\e[1m")init:$(echo -e "\e[0m")
Initialize the environment variables and create the folder structure for a new project.

$(echo -e "\e[1m")run:$(echo -e "\e[0m")
Build your code in debug mode and run it. You can provide arguments.

$(echo -e "\e[1m")check:$(echo -e "\e[0m")
Check if your code has norm errors.

$(echo -e "\e[1m")debug:$(echo -e "\e[0m")
Build your code in debug mode.

$(echo -e "\e[1m")build:$(echo -e "\e[0m")
Build your code in default mode.

$(echo -e "\e[1m")test:$(echo -e "\e[0m")
Build the tests and run them.

$(echo -e "\e[1m")submit:$(echo -e "\e[0m")
Submit your code to vogsphere.

$(echo -e "\e[1m")version:$(echo -e "\e[0m")
Display the current version of the framework.
EOF

# init
# build (build everything)
# norm (runs norminette)
# run (flags --debug, --default, --valgrind, --norm, --all)
# debug (run the vscode debugger if using vscode, otherwise run gdb)
# test (run all tests or just the ones specified)
# version

# submit (run norm, run tests, then submit)
# give a full really cool output making the coder feel their code is ready.

# set 