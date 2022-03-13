#!/bin/sh
echo "Enter the number:"
read num
i=1
while [ $i -le 10 ]
do
echo " $num * $i = $(( num * i )) "
i=$(( i+1 ))
done

