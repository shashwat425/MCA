echo "Enter start value: "
read a
echo "Enter end value: "
read b
sum=0
rem=$(($a%2))
if [ $rem -eq 0 ]
then
 a=$(($a+1))
fi

for((i=$a;i<=b;i=i+4))
do
	sum=$(($sum + $i))
done
echo "Sum is  = $sum"
