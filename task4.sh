#!/bin/bash

arraycontent=(`cat "file"`)
echo "whole array: " ${arraycontent[*]}


echo "length of array: " ${#arraycontent[*]}
echo "length of content at index 3: " ${#arraycontent[2]}



