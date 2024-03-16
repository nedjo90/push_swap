#!/bin/bash

for d in testers/*/;
do
	TOTAL=0;
	for f in $d*;
	do
		ARG=$(cat $f);
		SIZE=$(./push_swap $ARG | wc -l);
		TOTAL=`expr $TOTAL + $SIZE`;
	done;
	MEAN=`expr $TOTAL / 100`;
	echo "$d => moyenne = $MEAN";
done;
