#!/bin/bash

#####################
#	-lt 	<
#	-gt 	>
#	-le 	<=
#	-ge 	>=
#	-eq 	==
#	-ne 	!=
#####################

# declare integers
NUM1=${1:-2}
NUM2=${2:-2}

if [ $NUM1 -eq $NUM2 ]; then
	echo "Both Values are equal"
else
	echo "Values are NOT equal"
fi

if [ $NUM1 -gt $NUM2 ]; then
	echo "NUM1 is greater then NUM2"
else
	echo "NUM1 is not greater then NUM2"
fi
