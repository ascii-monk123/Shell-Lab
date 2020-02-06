

datf=`date`
echo $datf
x=1
for a in $datf
do 
if [ $x -eq 1 ]
then 
c=$a
elif [ $x -eq 2 ]
then
b=$a
elif [ $x -eq 3 ]
then
r=$a
elif [ $x -eq 4 ]
then
d=$a
elif [ $x -eq 6 ]
then 
e=$a
fi
x=`expr $x + 1`

done
echo "$r/$b/$e  $d $c"