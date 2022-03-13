#!/bin/sh
echo "Enter a number "
read a
#n=`expr $a % 5`
#if [ $n -eq 0 ]
if [ $((a%5)) -eq 0 ]
then
echo "Mutiple of 5 "
else
echo "Not Multiple of 5"
fi



