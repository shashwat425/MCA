#!/bin/sh
echo "Enter a number : "
read n
echo "Enter the value to multiply"
read m
a=$(($n * $m))
echo "Incremented Value after Multiplying : $a"
sum=$(($n + $m)) 
echo "Incremented Value after Adding : $sum"

