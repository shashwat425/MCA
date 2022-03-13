echo "Enter staring number"
read n1
echo "Enter ending number"
read n2
while [ $n1 -le $n2 ]
do
if [ $(($n1 % 2)) -eq 0 ]
then
echo "$n1 is first even no"
break
else
n1=$(($n1+1))
fi
done


