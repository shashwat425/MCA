echo " Enter a number : "
read num
if [ $num -gt 0 ]
then
  echo "Positive Number"
elif [ $num -lt 0 ]
then
  echo "Negative Number"
else
  echo "Neither Positive  nor Negative"
fi


