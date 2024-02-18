#/bin/bash

# loading_animation() {
#     local pid=$1
#     local message=$2
#     local delay=0.1
#     local chars="/-\|"
# 	local index=0

#     while ps -p $pid > /dev/null; do
#         printf "\r[%c] %s" "${chars:$index:1}" "$message"
#         sleep $delay
# 		index=$(( (index + 1) % ${#chars} ))
# 	done
# 	printf "\r\033[K"
# }

# sleep 5 &
# loading_animation $! 'thinking things through...'

# progress_bar() {
#     local total=$1
#     local progress=$2
#     local width=50
#     local filled=$((progress*width/total))
#     local empty=$((width-filled))

#     printf "Progress: [%s%s] %d%%\r" "$(printf '#%.0s' $(seq  1 $filled))" "$(printf ' %.0s' $(seq  1 $empty))" $((progress*100/total))
# }

# # Simulate a task with a total of  100 units of work
# for i in {1..100}; do
#     progress_bar  100 $i
#     sleep  0.1
# done
# echo

# Read a single character from the user and print its byte code
type()
{
	local text="$1"
	local delay=0.1
	local input=""

	# local tty_settings=$(stty -g)

	# stty -echo -icanon

	for (( i = 0; i < ${#text}; i++ )); do
		echo -n "${text:$i:1}"
		sleep $delay
	done
	
	echo

	# stty $tty_settings
}

restore_tty_settings()
{
	if [[ -v tty_settings ]]; then
		stty $tty_settings
	fi
	echo
}

trap 'restore_tty_settings' SIGINT

tty_settings=$(stty -g)
stty -echo -icanon

# Run your program in the background
type "hello, world! hello again! yet once more hello!" &

# Get the process ID of your program
pid=$!

# Loop to discard any input
while kill -0 $pid  2>/dev/null; do
	input=$(dd if=/dev/tty bs=1 count=1  2>/dev/null)
	echo "$input"
    # if echo "$input" | grep -q $'\x0a'; then
        # echo "You pressed enter".
    # fi
done

stty $tty_settings

read -p "Press enter to continue..."