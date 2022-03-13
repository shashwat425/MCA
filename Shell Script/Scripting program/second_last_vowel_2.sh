echo "Enter a string : "
read  str
len=${#str}
count=0

i=$len

while [ $i -gt 0 ]
do
    ch=$(echo $str | cut -c $i)
    case $ch in
      [aeiouAEIOU] )
            count=$(($count + 1))
        if [ $count -eq 2 ]
        then
            echo "Second last vowel is : $ch"
        fi
    ;;
esac
i=$(($i-1))
done

