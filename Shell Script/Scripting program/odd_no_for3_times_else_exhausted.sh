echo "Enter an odd number"
ans=0
for ((i=1;i<=3;i++))
do
	echo "Chance $i"
	read n
	if [ $(( n%2 )) -eq 1 ]
	then
		ans=1
		echo "Congratulations odd number found $n"
		break
	else
		echo "Try again"
	fi
done
if [ $ans -eq 0 ]
then
	echo "All chances exhausted"
fi


