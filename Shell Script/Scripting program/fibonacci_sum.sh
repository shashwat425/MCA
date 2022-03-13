echo "Enter number : "
read n
a=-1
b=1
while [ $n -gt 0 ]
do
c=$(($a+$b))
echo "$c "
sum=$(($sum+$c))
a=$b
b=$c
n=$(($n-1))
done
echo "Sum of fibonacci series : " $sum
