echo "Enter X-Cordinate"
read x
echo "Enter Y-Cordinate"
read y
if [ $x -gt 0 ] && [ $y -gt 0 ]
then
echo "First Quadrant"
elif [ $x -lt 0 ] && [ $y -gt 0 ]
then
echo "Second Quadrant"
elif [ $x -lt 0 ] && [ $y -lt 0 ]
then
echo "Third Quadrant"
elif [ $x -gt 0 ] && [ $y -lt 0 ]
then
echo "Fourth Quadrant"
fi
