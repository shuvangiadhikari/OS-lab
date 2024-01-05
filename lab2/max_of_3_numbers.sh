
#!/bin/bash

read -p "Enter 1st no." num1

read -p "Enter 2nd no." num2

read -p "Enter 3rd no." num3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then 
	echo  $num1 "is the largest"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then 
	echo $num2 "is the largest"
else
	echo $num3 "is the largest"
fi
 
