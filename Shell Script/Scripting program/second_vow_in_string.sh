#!/bin/bash
echo "Enter String : "
read str
x=0
echo "$str" | grep -o . | while read letter
do
if [[ $letter == [AEIOUaeiou] ]]
then
x=$((x+1))
fi
if [ $x -eq 2 ]
then
    echo "Second Vow in $str is : $letter"
    exit
fi
done




