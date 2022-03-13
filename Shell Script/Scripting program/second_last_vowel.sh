echo "Enter a string : "
read  s
#len=${#s}
cnt=0
n=2
#i=$len

#while [ $i -gt 0 ]
for(( i=0;i<${#s};i++ ))
do
    ch=${s:i:1}
    if [ "$ch" = "a" ] && [ "$ch" = "e" ] && [ "$ch" = "i" ] && [ "$ch" = "o" ] && [ "$ch" = "u" ] 
    then
    cnt=$(( cnt + 1 ))
        if (( $cnt == $n ))
        then
            echo $ch
        fi
    fi
done
