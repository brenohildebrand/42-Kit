#!/bin/bash

# This script will create all folders needed to start a new project with ft_framework.

PROJECT=$OLDPWD
FRAMEWORK=$PWD

if [ "$PROJECT" == "$FRAMEWORK" ]; then
	exit 0
fi

cd $PROJECT

mkdir -p .vscode
mkdir -p build
mkdir -p build/debug
mkdir -p build/debug/bin
mkdir -p build/debug/objects
mkdir -p build/debug/dependencies
mkdir -p build/default
mkdir -p build/default/bin
mkdir -p build/default/objects
mkdir -p build/default/dependencies
mkdir -p config
mkdir -p docs
mkdir -p source
mkdir -p tests

touch .vscode/c_cpp_properties.json
touch .vscode/launch.json
touch .vscode/tasks.json
touch config/.env
touch Makefile
touch README.md

cat << EOF > config/.env
vogsphere=""
EOF

cat << EOF > ./README.md
<h1 align="center"><b> 42</b></h1>

This project was developed during my journey at [42 São Paulo](https://github.com/42sp). If you want to see more checkout [this](https://github.com/brenohildebrand/42). Enjoy!

</br>
EOF
fi