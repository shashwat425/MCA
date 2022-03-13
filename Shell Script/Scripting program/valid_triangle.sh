
echo "Enter side 1"
read a
echo "Enter side 2"
read b
echo "Enter side 3"
read c

if [ a + b > c && b + c > a && || a + c > b ]
then
echo "Triangle is Possible"
else
echo "Triangle not Possible"
fi
