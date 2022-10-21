Ex1:
Permission of $HOME directory via drwx------
Of $SCRATCH via drwxr-xr-x
Other users directories are reachable only by them.
The directory owner jbucko can read write execute and his group rights are to read.
I am not permitted to access users/jbucko in terms of reading or writing.

Ex2:

grep 00$ binary.txt
grep '^1.*1$' binary.txt
grep 110 binary.txt
grep '1.*1.*1.*' binary.txt    
grep '111' binary.txt

retest.sh file inside the measured file does the job and stores it in t_out.txt file and prints
the average which outputted 20 in this case.
cat retest.sh
#!/bin/bash

RE="Temperature: ([0-9]+\.[0-9]+) deg at time: ([0-9]+\.[0-9]+) sec"
sum=0
counter=1
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

Ex3:


![image](https://user-images.githubusercontent.com/73917265/197193396-a1e5b76e-53e8-4961-a9a8-34ec1baa07dc.png)

prime.sh file inside the measured file inspects the amount of unique factors and outputs if 
the input is a positive integer. I really tried to add the integer check and positivity check 
myself but could not make the elif else statements work. I tried to integrate these scripts
re='^[0-9]+$'
if ! [[ $number =~ $re ]] ; then
   echo "error: Not a number" >&2; exit 1
fi
 for number check, and
 if [ $number -lt 0 ]
then
    echo "Negative"
for positivity check.

In the end the script outputted negative or not a number but also outputted prime or not prime for such cases since I couldnt integrate the if elses.
The factor function already checked these conditions so I left the script like that. 

cat prime.sh
number=$1
factors=$(echo $number|factor)
nof_factors=$(echo "$factors" | wc -w)

if [[ $nof_factors>2 ]];
then
echo "not prime"
exit 1
fi
if [[ $nof_factors<3 ]];
then
echo "is prime"
fi


