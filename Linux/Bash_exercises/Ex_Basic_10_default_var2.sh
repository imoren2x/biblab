#!/bin/bash

#Default variable:
# FOO=${VARIABLE:=default}
#
#Equivalent to
# if [ -z "${VARIABLE}" ]; then
#   FOO='default'
# else
#   FOO=${VARIABLE}
# fi
# VARIABLE='default'


#Defaults values
tmpdir=/tmp
defvalue=1

#DIR takes the first argument $1,
#  if not present, $tmpdir sets
#  the value as default.
DIR=${var1:=$tmpdir}		# Defaults to /tmp dir.
#VALUE takes the second argument $2,
#  if not present, $defvalue sets
#  VALUE as default.
VALUE=${var2:=$defvalue}	# Default value is 1.

echo "\$DIR: " $DIR
echo "\$var1: " $var1

echo "\$VALUE: " $VALUE
echo "\$var2: " $var2