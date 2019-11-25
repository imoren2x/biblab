#!/bin/bash

##########################
# stdout to file
#	cmd  > file
#	cmd 1> file
###
# stdout append to file
#	cmd  >> file
#	cmd 1>> file
###
# stderr to file
#	cmd 2> file
###
# stderr append to file
#	cmd 2>> file
###
# stderr to stdout
#	cmd 2>&1
###
# stdout and stdout to file
#	cmd  >& file
###
# stdin from file to command
#	cmd  < file
##########################

###3) Redirigir la salida estandar a un archivo y el error estandar a otro archivo.
#	grep -i linux *  2>  error.txt  1>  salida.txt

# 4) Redirigir la salida y entrada a un mismo archivo.
# 4.1)  grep -i linux * > salida_error.txt 2>&1
# 4.2)  grep -i linux * >& salida_error.txt

#2) Redirigir la salida y error estandar a diferentes archivos, y ver el resultado en pantalla
#(grep -i linux * | tee ../salida.txt) 3>&1 1>&2 2>&3 | tee ../error.txt

