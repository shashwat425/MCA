echo "Enter the number : "
read num
echo "Enter power:"
read pow
a=1
c=1
while [ $a -le $pow ]
do

c=$((c * num))
a=$((a + 1))

#c=`expr $c \* $num`
#a=`expr $a + 1`

done
echo $c

