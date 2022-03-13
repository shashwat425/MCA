#!/bin/sh

echo "Enter the number"
read a
a=`expr $a % 2`
if [ $a -eq 0 ]
then 
echo "EVEN"
else
echo "ODD"
fi


