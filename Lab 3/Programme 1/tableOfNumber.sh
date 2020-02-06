echo "Enter the number whose table is to be calculated"
read a
echo "Enter the number upto which table is to be calculated"
read b
for x in `seq 1 1 $b`
do
mult= `expr $a \* $x`
echo $mult
done