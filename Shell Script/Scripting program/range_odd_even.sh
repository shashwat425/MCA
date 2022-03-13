echo "Enter a number"
read n
i=1
while [ $i -le $n ]
do
if [ `expr $i % 2` ==  0 ]
then
echo " even = $i"
else
echo " odd = $i"
fi
i=`expr $i + 1`
done

