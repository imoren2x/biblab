#!/bin/bash

#Use backticks " ` ` " to execute shell command
echo `uname -o`
#Also possible to $( )
echo $(uname -o)

#Executing bash command without backticks
echo uname -o
