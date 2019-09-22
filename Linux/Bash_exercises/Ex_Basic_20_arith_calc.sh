#!/bin/bash

#bash_addition_calc.sh 88 12

#Let is used to perform arith. op. on sh var
SUM1=${1:-0}
SUM2=${2:-0}
let RESULT1=$SUM1+$SUM2
echo $SUM1+$SUM2=$RESULT1 ' -> # let RESULT1=$SUM1+$SUM2'

#Sets RESULT2 as integer (option -i)
declare -i RESULT2
SUM1=${1:-0}
SUM2=${2:-0}
RESULT2=$SUM1+$SUM2
echo $SUM1+$SUM2=$RESULT2 ' -> # declare -i RESULT2; RESULT2=$1+$2'

#$(($1 + $2)) makes arith. eval.
echo $SUM1+$SUM2=$(($SUM1 + $SUM2)) ' -> # $(($SUM1 + $SUM2))'