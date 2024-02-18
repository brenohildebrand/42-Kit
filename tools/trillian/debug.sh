#!/bin/bash

# This script will call 'trillian make' and 'make debug' meaning it will
# recreate the Makefile and build the project in debug mode.

PROJECT=$OLDPWD
FRAMEWORK=$PWD

cd $PROJECT
trillian make
make debug