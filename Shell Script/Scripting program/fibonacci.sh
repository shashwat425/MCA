echo "Enter number : "
read n
a=-1
b=1
while [ $n -gt 0 ]
do
c=$(($a+$b))
echo "$c "
a=$b
b=$c
n=$(($n-1))
done




