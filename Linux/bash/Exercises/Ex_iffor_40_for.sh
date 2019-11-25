#!/bin/bash

# bash for loop
echo "Primer bucle"
for f in $( ls /var/ ); do
  echo $f
done

# bash for loop
echo "Segundo bucle"
StrList=(hola caracola)
for f in ${StrList[@]}; do
  echo $f
done

A=0
echo "Tercer bucle"
for (( i=0;i<5;i++)); do
  echo $A
  ((A++))
done
