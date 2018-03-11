#!/bin/bash

is_lower()
{
	echo "${a,,}"
}

is_root()
{
	[ $(id -u) -eq 0 ] && return $TRUE || return $FALSE
}

is_user_exists()
{
	if id -u "$1" >/dev/null 2>&1
	then
		echo "user exists"
	else
        echo "user does not exist"
	fi
	
}