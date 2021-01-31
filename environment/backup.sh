#!/bin/bash

if [ $1 == b ]
then
	echo "backup"
	dpkg --get-selections > package.list
	sudo tar jcf source.list.tar.bz2 /etc/apt/sources.list.d/ 
	sudo chown $USER:$USER source.list.tar.bz2
	sudo apt-key exportall > apt.keys
elif [ $1 == r ]
then
	echo "restore"
	sudo apt-key add apt.keys
	sudo add-apt-repository ppa:graphics-drivers/ppa
	sudo tar jxf source.list.tar.bz2 -C /
	sudo apt-get update
	sudo apt-get install dselect
	sudo dselect update
	sudo dpkg --set-selections < package.list
	sudo apt-get dselect-upgrade -y
elif [ $1 == n ]
then
	wget https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/cuda-ubuntu2004.pinsudo
	sudo mv cuda-ubuntu2004.pin /etc/apt/preferences.d/cuda-repository-pin-600sudo
	sudo apt-key adv --fetch-keys https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/7fa2af80.pubsudo
	sudo add-apt-repository "deb https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/ /"
	sudo apt-get update
	sudo apt-get -y install cuda
else
	echo "b: backup"
	echo "r: restore"
fi
