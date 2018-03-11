#!/bin/bash

echo "comparing content of files: " 
diff -c f1 f2

#read -p "studentname: " studentname
studentname=sadia
set `ls -li $1`

echo "owner: " $3
echo "group: " $5
echo "permissions: " $2

echo "filename: " $1


if [ studentname==$4 ]
then echo "cheating = 0"
else echo "cheating = 1"
fi

