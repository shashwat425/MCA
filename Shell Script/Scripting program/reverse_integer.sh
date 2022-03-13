echo "Enter a number"
read num
rev=0
while [ $num -gt 0 ]
do
  mod=$((num % 10))
  rev=$((rev*10 + mod))
  num=$((num / 10))
done

echo $rev



