#!/bin/bash

# This is the official installer for the ft_framework.
# You should download it and execute. In bash (using wget):
# wget https://raw.githubusercontent.com/brenohildebrand/ft_framework/main/tools/installer/install.sh -q -O install.sh && ./install.sh; rm -rf install.sh

install()
{
	sleep 2
	git clone git@github.com:brenohildebrand/ft_framework.git ~/ft_framework > /dev/null 2>&1
	sed -i "s/^TRILLIAN=.*/TRILLIAN=~\/ft_framework\//" ~/ft_framework/config/.env
	sed -i "s/^FT_USERNAME=.*/FT_USERNAME=$FT_USERNAME/" ~/ft_framework/config/.env
	current_shell=$(basename "$SHELL")
	case "$current_shell" in
		bash)
			line="alias trillian=\"~/ft_framework/tools/trillian/trillian.sh\""
			if ! grep -q "$line" "$HOME/.bashrc"; then
				echo $line >> ~/.bashrc
			fi
			;;
		zsh)
			line="alias trillian=\"~/ft_framework/tools/trillian/trillian.sh\""
			if ! grep -q "$line" "$HOME/.zshrc"; then
				echo $line >> ~/.zshrc
			fi
			;;
	esac
	chmod +x ~/ft_framework/tools/trillian/*.sh
	source ~/.bashrc
}

load() {
    local pid=$1
    local message=$2
    local delay=0.1
    local chars="/-\|"
	local index=0

    while ps -p $pid > /dev/null; do
        printf "\r[%c] %s" "${chars:$index:1}" "$message"
        sleep $delay
		index=$(( (index + 1) % ${#chars} ))
	done
	printf "\r\033[K"
}

echo "Welcome to ft_framework."
read -p "Are you sure you want to install it? (yes/no) " answer
if [[ $answer != "yes" ]]; then
	echo "Aborting."
	exit 0
fi

read -p "What's your username at 42? " FT_USERNAME
echo -n "What's your password? "
sleep 0.5
echo
echo "Just kidding."
echo
sleep 0.5

if [ -d ~/ft_framework ]; then
	echo "~/ft_framework already exists."
	read -p "Should I overwrite it? (yes / no) " answer
	if [[ "$answer" != "yes" ]]; then
		echo "Aborting."
		exit 0
	fi
	echo
	rm -rf ~/ft_framework
fi

install &

load $! "Installing..."

echo -e "\rInstallation completed."

exit 0

echo "Welcome to ft_framework. Are you sure you want to install it? (yes/no) "
read answer

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