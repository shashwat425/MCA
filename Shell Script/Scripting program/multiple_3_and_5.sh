#!/bin/sh
echo "Enter a number "
read a
m=$a
n=$(($a % 3))
m=$(($m % 5))
if [ $n -eq 0 ] && [ $m -eq 0 ]
then
echo "Mutiple of 3 and 5 "
elif [ $n -eq 0 ]
then
echo "Multiple of 3 only"
elif [ $m -eq 0 ]
then
echo "Multiple of 5 only"
else
echo "Neiher multiple of 3 nor 5"
fi

