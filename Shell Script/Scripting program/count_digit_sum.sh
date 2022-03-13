echo "Enter a number"
read num
count=0
temp=$num
sum=0
while [ $num -gt 0 ]
do 
mod=$((num % 10))
sum=$(($sum + $mod ))
num=$((num / 10))
#sum=$(($sum + $num ))
#count=$(($count + 1))
done
echo "Sum of digit in $temp is : $sum "

