#!/bin/bash

PROJECTPWD=$OLDPWD
SCRIPTPWD=$PWD
FRAMEWORKPWD=$(dirname $SCRIPTPWD)

if [ "$PROJECTPWD" = "$FRAMEWORKPWD" ]; then
	echo "You're in the ft_framework directory. Nothing done."
	exit 0
else
	if [ $# -ne 1 ]; then
		echo "Usage: trillian submit <vogsphere-url>."
		exit 1
	fi

	cd $PROJECTPWD

	norminette ./source

	if [ $? -ne 0 ]; then
		exit 1
	fi

	mkdir -p submit

	mkdir -p submit/lib
	mkdir -p submit/lib/ft_framework
	mkdir -p submit/lib/ft_framework/source
	mkdir -p submit/lib/ft_framework/objects
	cp -r ${FRAMEWORKPWD}/source submit/lib/ft_framework/source

	mkdir -p submit/source
	cp -r ./source ./submit/source

	touch Makefile
	echo '
	# TODO: Makefile
	' > Makefile

	while true; do
		read -p "Are you sure you want to submit? (yes/no): " ANSWER

		case "$ANSWER" in
			"yes")
				cd submit
				git init
				git remote add origin ${1}
				git add .
				git commit -m 'ez'
				git push
				break
				;;
			"no")
				echo "Aborting."
				break
				;;
			*)
				echo "Please enter 'yes' or 'no'."
				;;
		esac
	done
fi