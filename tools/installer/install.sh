#!/bin/bash

# This is the official installer for the ft_framework.
# You should download it and execute. In bash (using wget):
# wget https://raw.githubusercontent.com/brenohildebrand/ft_framework/main/tools/installer/install.sh -q -O install.sh && ./install.sh; rm -rf install.sh

install()
{
	sleep 2
	git clone git@github.com:brenohildebrand/ft_framework.git ~/ft_framework > /dev/null 2>&1
	current_shell=$(basename "$SHELL")
	case "$current_shell" in
		bash)
			line="export PATH=\"\$HOME/ft_framework/tools/trillian/bin:\$PATH\""
			if ! grep -q "$line" "$HOME/.bashrc"; then
				echo $line >> ~/.bashrc
			fi
			;;
		zsh)
			line="export PATH=\"\$HOME/ft_framework/tools/trillian/bin:\$PATH\""
			if ! grep -q "$line" "$HOME/.zshrc"; then
				echo $line >> ~/.zshrc
			fi
			;;
	esac
	chmod +x ~/ft_framework/tools/trillian/source/*.sh
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