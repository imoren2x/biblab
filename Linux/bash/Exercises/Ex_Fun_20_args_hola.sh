#!/bin/bash

#set variable = value
#echo $variable

echo $0 ${1:-1} ${2:-2} ${3:-3}

echo Total: $#

shift

echo $0 ${1:-1}
