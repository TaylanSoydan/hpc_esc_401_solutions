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
