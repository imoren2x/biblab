#!/bin/bash

#Default variable:
# FOO=${VARIABLE:-default}
#
#Equivalent to
# if [ -z "${VARIABLE}" ]; then
#   FOO='default'
# else
#   FOO=${VARIABLE}
# fi
#


#Defaults values
tmpdir=/tmp
defvalue=1

#DIR takes the first argument $1,
#  if not present, $tmpdir sets
#  the value as default.
DIR=${1:-$tmpdir}		# Defaults to /tmp dir.
#VALUE takes the second argument $2,
#  if not present, $defvalue sets
#  VALUE as default.
VALUE=${2:-$defvalue}	# Default value is 1.

echo "\$DIR: " $DIR
echo "\$VALUE: " $VALUE