#!/bin/bash

clear
gcc lucky_num.c -o lucky -Wall -lm
echo "Currently letting the gods decide your fate..."
printf "\nYour lucky number is "
./lucky
