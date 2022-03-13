read -p "Enter a string : " str
length=${#str}
for((i=0;i<$length;i++))
do
c=${str:i:1}
if [[ $c == [AEIOUaeiou] ]]
then
s=$c
fi
done
echo "Last vowel in $str is : $s"

