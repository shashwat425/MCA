#!/bin/sh
echo "Enter the year"
read year
a=$(( $year % 4 ))
b=$(( $year % 100 ))
c=$(( $year % 400 ))
e=$year
if [ $a -eq 0 -a $b -ne 0 -o $c -eq 0 ]
then
echo " Entered year - $year is a leap year"
d=$(( $e+4 ))
echo "Next Leap Year is : $d"
else
echo "Entered year - $year is not a leap year "
while [ $(($year %4)) -ne 0 ] 
do
year=$(( $year+1 ))
done
echo "Next Leap Year is $year"
fi


