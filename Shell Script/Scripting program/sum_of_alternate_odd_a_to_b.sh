echo "Enter start value: "
read n1
if [ $(($n1 % 2)) -eq 0 ]; then n1=$((n1+1))
fi
echo "Enter end value: "
read n2
sum=0
while [ $n1 -le $n2 ]
do
	sum=$(( $sum+$n1 ))
	n1=$(($n1+4))
done
echo "result is  = $sum"


