#!/bin/bash

# This is the official installer for the ft_framework.
# You should download it and execute. In bash (using wget):
# wget https://raw.githubusercontent.com/brenohildebrand/ft_framework/main/tools/installer/install.sh -q -O install.sh && ./install.sh; rm -rf install.sh

cd $(dirname $0)
source ../shared/input.sh
source ../shared/colors.sh
source ../shared/cursor.sh
source ../shared/styles.sh

# echo -e "${BOLD}ft_framework-0.0.0${RESET}"
# echo -e "Installing..."

tput cnorm

echo -e "\e[?12;25h"

type --text="\
This is the official installer for ft_framework.
If you are unsure how you ended up here, press 'esc' to exit. Otherwise, press 'enter' to continue."

while true; do
	character=$(get_character)
	if [[ "$character" == $'\x1b' ]]; then
		echo
		exit 0
	elif [[ "$character" == $'\x00' ]]; then
		echo
		break
	fi
done

echo
type --text="What's your username at 42?" --newline
echo -n "Username: "
read username

echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CLEAR_LINE}
echo -e ${CLEAR_LINE}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}

while true; do
	type --text="Are you sure your username is ${username}?" --newline
	read -p "Answer: (yes/no) " answer
	if [[ "$answer" == "yes" ]]; then
		break
	elif [[ "$answer" == "no" ]]; then
		echo -e ${CURSOR_UP}
		echo -e ${CLEAR_LINE}
		echo -e ${CURSOR_UP}
		type --text="What's your username at 42?" --newline
		echo -n "Username: "
		read username
		echo -e ${CURSOR_UP}
		echo -e ${CURSOR_UP}
		echo -e ${CLEAR_LINE}
		echo -e ${CLEAR_LINE}
		echo -e ${CURSOR_UP}
		echo -e ${CURSOR_UP}
	else
		echo -e ${CURSOR_UP}
		echo -e ${CURSOR_UP}
		echo -e ${CLEAR_LINE}
		echo -e ${CLEAR_LINE}
		echo -e ${CURSOR_UP}
		echo -e ${CURSOR_UP}
		type --text="You should answer with 'yes' or 'no'. "
	fi
done

echo

echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CLEAR_LINE}
echo -e ${CLEAR_LINE}
echo -e ${CLEAR_LINE}
echo -e ${CLEAR_LINE}
echo -e ${CLEAR_LINE}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
echo -e ${CURSOR_UP}
type --text="So get ready because installation is... "
type --text="Beep... "
type --text="Boop... "
type --text="INCOMING!" --newline

echo -e "\e[?12l"