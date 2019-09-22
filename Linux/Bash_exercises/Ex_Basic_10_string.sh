#!/bin/bash

#Define bash global variable
#This variable is global and can be used anywhere in this bash script
VAR="global variable"
BUR="local variable"

CAR="imoren2x "
CAR+=$VAR

echo ${VAR}s ${BUR[0]}
echo ${CAR}
