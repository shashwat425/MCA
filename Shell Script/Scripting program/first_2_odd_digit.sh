echo "Input a number"
read n
a=$n
c=0
d=0
while [ $a -gt 0 ]
do
	r=$(( $a%10 ))
	if [ $(( $r%2 )) -eq 1 ]
	then
		c=$d
		d=$r
	fi
	a=$(( $a/10 ))
done
if [ $d -gt 0 ] && [ $c -gt 0 ]
then
	echo "$d $c"
elif [ $d -gt 0 ]
then
	echo "Only one odd digit"
else
	echo "No odd digits"
fi


