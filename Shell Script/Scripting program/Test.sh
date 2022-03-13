
#!/bin/sh
#echo "Enter no of arguments : "

#comment 

#echo $0
#echo $3
#echo $*
#echo $#

# Arithmatic operations

#NAME="Naeem Ahmed"
#echo $NAME

#a=10
#expr a=a+5
#echo "Value of a is : $a"
#expr a =a+5


#Relational Opeartor

b=10
c=20

#-eq ==> Equal to
#-ne ==> Not equal to
#-gt ==> Greater than  (>)
#-lt ==> Less than  (<)
#-ge ==> Greater than equal to (>=)
#-le ==> Less than equal to (<=)


#if [ $b -le $c ]
#then 
#   echo "B is less than C"
#fi 

#Logical operators : !, -o, -a

#File opeartors : -b, -c, -d, -f, -g ......

#String Operators :  =, !=, -z, -n, str

#str1="Sahu"
#str2="Kumar"

#echo "String 1 : $str1"
#echo "String 2 : $str2"

#if [ $str1 = $str2 ]
#then
#echo "Strings are Equal"
#else
#echo "Strings are Not Equal"
#fi


#str3=""

#if [ -z $str3 ]
#then 
#echo "Empty"
#fi


#Looping Statement
# for, while,


#for var in 0 1 2 3 4 5
#do
#echo $var
#done


#for var in $*
#do
#echo $var
#done

for friends in  "Vinush CSE" "Hima ECE" "Sudhir CIVIL" "Shivay IT"
do
  set -- $friends   #to parse variable friends
  echo "$1 is from $2 Department"
done


#WHILE LOOP

#a=1

#while [ $a -lt 10 ]
#do
#echo $a
#a=`expr $a + 1`
#done


#a=12
#until [ !$a -lt 10 ]
#do
#echo $a
#a=`expr $a +1`
#done


