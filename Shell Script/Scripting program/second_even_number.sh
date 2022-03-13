echo "Enter staring number"
read n1
echo "Enter ending number"
read n2
while [ $n1 -le $n2 ]
do
if [ $(($n1 % 2)) -eq 0 ]
then
count=$(($count+1))
if [ $count -eq 2 ]
then
echo "$n1 is second even no"
echo "$count "
break
#echo "$count "
fi
else
echo "$count  "
n1=$(($n1+1))
fi
done
