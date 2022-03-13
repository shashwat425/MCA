echo "Enter a number"
read num
a=$num
count=0
while [ $a -gt 0 ]
do
	c=$(( $a%10 ))
	if [ $(( $c%2 )) -eq 0 ]
	then
		count=$(( count+1 ))
		if [ $count -eq 2 ]
		then
			echo "Second last even digit of $num=$c"
			break
		fi
	fi
	a=$(( $a/10 ))
done
if [ $count -eq 0 ]
then
	echo "No even digits found"
elif [ $count -eq 1 ]
then
	echo "Only one even digit found"
fi


