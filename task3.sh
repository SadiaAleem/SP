#!/bin/bash

unix=(debian redhat ubuntu suse fedora)
echo "whole array: " ${unix[*]}
echo "array length: "${#unix[*]}
echo "length of element on index 2: "${#unix[2]}

echo "extract: " ${unix[@]:3:2}

echo "replaced: "${unix[@]/ubuntu/sco unix}

unset unix[3]
echo "removed: " ${unix[*]}

temp=(${unix[@]} "aix" "hp-ux")
echo "elements added: " ${temp[*]}

echo "unix array: " ${unix[*]}

linux=(${unix[*]})
echo "linux array: " ${linux[*]}

bash=(${unix[*]} ${linux[*]})
echo "bash: " ${bash[*]}

unset unix[*]
unset linux[*]

