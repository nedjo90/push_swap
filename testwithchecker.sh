#!/bin/bash

for d in testers/*/;
do
#    TOTAL=0;
    for f in $d*;
    do
        ARG=$(cat $f);
        SIZE=$(./push_swap "$ARG" | wc -l);
        RESULT1=$(./push_swap "$ARG" | ./checker_linux "$ARG");

        if [ "$RESULT1" != "OK" ]; then
	        echo "number of numbers : $d";
	        echo "linux";
	        echo "$RESULT1";
	        echo "$SIZE";
          echo "ARG: $ARG";
          exit 1;
        fi
    done;
done;

