#!/bin/bash
#Lab 3
#By: Carlos Fabregas & Cherlyne Santhirarajan
#Objective: print the calendar with specified month in the arguments

if [ $# -eq 0 ]
	then
	cal
fi
if [ $# -eq 1 ]
	then
	cal $1 2016
fi
if  [ $# -eq 2 ]
	then
	cal $1 $2
fi
if [ $# -gt 2 ]
	then
	echo "invalid argument"
fi
