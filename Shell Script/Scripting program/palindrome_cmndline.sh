#! /bin/bash
count=0
for word in $*
do
	rev=""
	i=`expr ${#word} - 1`
	while [[ $i -ge 0 ]]
	do
		ch=${word:$i:1}
		rev=$rev$ch
		i=`expr $i - 1`
	done
	if [[ $rev == $word ]]
	then
		count=`expr $count + 1`
	fi
done
echo "Number of Palindrome words in command line arguments are: $count"
