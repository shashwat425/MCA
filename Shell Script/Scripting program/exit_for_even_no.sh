while ((1))
do
  echo "Enter a number : "
  read a
  if [ $(($a % 2)) -eq 0 ]
  then
      echo $a
      break
  fi
done


