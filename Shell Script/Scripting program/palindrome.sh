echo "Enter a number"
read num
sum=0
temp=$num
while [ $num -gt 0 ]
do
mod=$((num % 10))
sum=$(( ($sum*10) + $mod))
num=$((num / 10))
done
if [ $sum -eq $temp ]
then
  echo "Palindrome No"
else
  echo "Not Palindrome"
fi


