echo "Enter the principle value: "
read p
echo "Enter the rate of interest:"
read r
echo "Enter the time period:"
read t
echo "No of times interest applied"
read n
power=$(($n*$t))
echo $power
ci=`echo "scale=2; $p*((1+($r/$n))^$power" | bc`
echo "Compound Interest = $ci"

#s=$(( ($p * (1 + ($r/100)) )
#echo "The compound interest is : $s"

