echo "Enter the range to print prime numbers"
read start end
count=0
if [ $start -le 2 ]
then
	start=3
fi
for ((i=start;i<=end;i++))
do
	prime=1
	for ((j=2;j<i;j++))
	do
		if [ $(( i%j )) -eq 0 ]
		then
			prime=0
			break
		fi
	done
	if [ $prime -eq 1 ]
	then
		echo $i
		count=$(( count+1 ))
	fi
done
echo "Total prime numbers in the given range=$count"
