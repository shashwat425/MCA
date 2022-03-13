echo "Enter a number : "
read n
res=1
for (( i=2; i<=n; i++ ))
do
res=$((res*i))
done
echo "Factorial of $n is : $res"
