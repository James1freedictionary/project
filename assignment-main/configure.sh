#!/bin/bash -ev
if tty -s;then echo "yes tty"; else echo "nope tty";fi
apt update 
apt install -y fonts-noto-core
fc-cache -f -v
