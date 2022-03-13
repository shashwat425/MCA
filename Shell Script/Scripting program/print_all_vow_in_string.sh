read str
length=${#str}
for((i=0;i<$length;i++))
do
c=${str:i:1}
if [[ $c == [AEIOUaeiou] ]]
then
echo $c
fi
done




