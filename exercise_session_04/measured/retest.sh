#!/bin/bash

RE="Temperature: ([0-9]+\.[0-9]+) deg at time: ([0-9]+\.[0-9]+) sec"
sum=0
ounter=1
while read A ; do
	if [[ "$A" =~ $RE ]] ; then
		counter=$((counter+1))
		sum=$(echo "${BASH_REMATCH[1]} + $sum" | bc) 

		echo "${BASH_REMATCH[1]} ${BASH_REMATCH[2]}">>t_out.txt
		
		

        fi
	echo $sum
	
	done
average=$(echo "$sum/$counter" | bc)
echo "$average"
