#!/bin/bash

#fibonacci series

num1=0

num2=1

read -p "Enter number of terms to be generated" count

for ((i=0; i<count; i++))
do
	echo -ne "$num1\t"
	num3=$((num1+num2))
	num1=$num2
	num2=$num3
done

