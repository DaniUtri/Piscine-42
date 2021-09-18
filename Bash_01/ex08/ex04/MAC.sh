ifconfig | grep -E "^[^a-zA-z]*ether" | tr -d "\t" | cut -f2 -d " "
