#!/bin/bash
echo "Enter a character: "
read c
if [[ $c == [AEIOUaeiou] ]]
then
    echo "vowel"
else
    echo "Not a vowel"
fi


