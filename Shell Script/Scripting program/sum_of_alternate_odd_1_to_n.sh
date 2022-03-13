echo "Enter the value of n"
read n
sum=0
for ((i=1;i<=n;i+=2))
do
	sum=$(( sum+i ))
done
echo "Sum of alternate odd numbers upto n = $sum"

