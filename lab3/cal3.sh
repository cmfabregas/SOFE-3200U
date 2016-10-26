#!/bin/bash
#cal3.sh
#Lab3
#By: Carlos Fabregas & Cherlyne Santhirarajan
#Objective: print the calendar with specified month in the arguments

if [ $# -eq 0 ]
	then
	echo "You must provide at least one month"
fi
if [ $# -eq 1 ]
	then
	cal $1 2016
fi
if  [ $# -eq 2 ]
	then
	cal $1 2016
	echo "$2 is Not a valid month/input"
fi
if [ $# -gt 2 ]
	then
	echo "invalid number of arguments"
fi

