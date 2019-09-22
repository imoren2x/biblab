#!/bin/bash

#Define bash global variable
#This variable is global and can be used anywhere in this bash script
VAR="global variable"
function bash {
        #Define bash local variable
        #This variable is local to bash function only
        printf "$1 \n"
        local VAR="local variable"
        echo $VAR
}

echo $VAR
bash llamando
# Note the bash global variable did not change
# "local" is bash reserved word
echo $VAR
