#!/bin/bash

#############################
#	= 	equal
#	!= 	not equal
#	< 	less then
#	> 	greater then
#	-n s1 	string s1 is not empty
#	-z s1 	string s1 is empty
#############################

#Declare string S1
S1=${1:-"Bash"}
#Declare string S2
S2=${2:-"Scripting"}

if [ $S1 = $S2 ]; then
  echo "Both Strings are equal"
else
  echo "Strings are NOT equal"
fi

if ( test -z $S1 ); then
  echo "The string is empty."
else
  echo "The string is not empty."
fi
