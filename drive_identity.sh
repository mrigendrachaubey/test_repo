#!/bin/bash
function avbldrv {
    grep -Ff <(hwinfo --disk --short) <(hwinfo --usb --short)
}

if [[ "$1" == "/dev/sda" || "$1" == "/dev/sdb" ]]; then
    echo "Don't formate /dev/sda or /dev/sdb !!"
    echo "Available drives"
    avbldrv
    exit 1
fi
read -p "Is this a good question (y/n)? " answer
echo $answer
