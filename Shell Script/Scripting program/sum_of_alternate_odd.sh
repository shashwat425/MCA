echo "Enter the value of n"
read n
c=1
sum=0
for ((i=1;i<=n;i++))
do
	sum=$(( sum+c ))
	c=$((c+2))
done
echo "Sum of alternate odd numbers upto n = $sum"


