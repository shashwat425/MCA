#!/bin/sh
echo "Enter the year"
read year
x=$(( $year % 400))
y=$(( $year % 100))
z=$(( $year % 4))
if [ $x -eq 0 ] || [ $y -ne 0 ] && [ $z -eq 0 ]
then
echo "Entered year - $year is a leap year"
else
echo "Entered year - $year is not a leap year "
fi



