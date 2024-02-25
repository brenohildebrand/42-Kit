#!/bin/bash

echo $(find tests -type f -exec echo {} \; | sed "s/.*/\
&\
&\
&/")