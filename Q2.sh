#!/bin/bash

if [ -z "$1" ]
then
	echo "no arguments given"
else
	IFS=="
	"
	lines=(`cat $1`)
	count=1
	for i in ${lines[*]}
	do
		out=`expr $count % 2`
		if [ $out -eq 0 ]
		then
			echo $i >> evenfile
		else	
			echo $i >> oddfile
		fi
		count=`expr $count + 1`
	done
fi	