#!/bin/bash

###################################
# \a 	alert (bell) 			\b 	backspace
# \e 	an escape character 	\f 	form feed
# \n 	newline 				\r 	carriage return
# \t 	horizontal tab 			\v 	vertical tab
# \\ 	backslash 				\` 	single quote
# \nnn 	octal value of chars 	\xnn hex value of chars
#
# ( see [http://www.asciitable.com/ ASCII table] ) 	 ( see [http://www.asciitable.com/ ASCII table] )
###################################

#Declare bash string variable
BASH_VAR="Bash Script"

# echo variable BASH_VAR
echo $BASH_VAR

# meta characters special meaning in bash is suppressed when  using single quotes
echo '$BASH_VAR  "$BASH_VAR"'