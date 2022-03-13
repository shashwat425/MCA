echo "Enter a string"
read str
l=${#str}
count=0
for ((i=l;i>0;i--))
do
c=${str:i:1}
if [[ $c == [AEIOUaeiou] ]]
then
count=$(($count+1))
fi
if [ $count == 2 ]
then
echo $c
exit
fi
done
