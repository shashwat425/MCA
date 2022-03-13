read -p "Enter a string : " str
length=${#str}
i=$((length-1))
while [ $i -ge 0 ]
do
revstr=$revstr${str:$i:1}
i=$((i-1))
done
echo "Reverse string is : $revstr "



 
