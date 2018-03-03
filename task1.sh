#!/bin/bash 
	
expr $1 + 0 && expr $2 + 0

read -p "enter first number: " n1
read -p "enter second number: " n2

if [ $n1 -eq $1]
then 
	if [ $n2 -eq $2 ] 
	then
		mul=`expr $1 \* $2`
 		echo "multiplication: " $mul

		add=`expr $1 + $2`
		echo "addition: " $add
		
		sub=`expr $1 - $2`
		echo "subtraction: " $sub 

		if [ num2 != 0 ]
		then 
			div=`expr $1 \ $2`
			echo "division: " $div
		else 
			echo "error"		
		fi
	fi
fi
	

