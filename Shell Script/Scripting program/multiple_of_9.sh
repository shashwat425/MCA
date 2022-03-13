#!/bin/sh
echo "Enter a number "
read a
#n=`expr $a % 9`
#if [ $n -eq 0 ]
if [ $(($a%9)) -eq 0 ]
then
echo "Mutiple of 9 "
else
echo "Not Multiple of 9"
fi

