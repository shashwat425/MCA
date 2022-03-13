echo "Enter a number"
read num
count=0
temp=$num
while [ $num -gt 0 ]
do
mod=$((num % 10))
num=$((num / 10))
count=$(($count + 1))
done
echo "No of digit in $temp is : $count "


