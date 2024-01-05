 
#!/bin/bash


#read strings
echo -n "Enter first string: "
read str1

echo -n "Enter second string: "
read str2

#compare strings

if [ "$str1" = "$str2" ]; then
	echo "Strings are equal"
else
	echo "strings aren't equal"
fi


