#!/bin/bash

#while loop
COUNT=${1:-5}

while [ $COUNT -gt 0 ]; do
    export ELECTRICAL_SWITCHES=y; export NEW_WIZARD=y;
    #let COUNT=COUNT-1
	let COUNT-=1
	let COUNT--
	$(COUNT--)
done
