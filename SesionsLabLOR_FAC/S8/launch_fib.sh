#!/bin/bash

if [ "$#" -ne 1 ]
then
	echo "usage $0 num" 
	echo "num: numero de processos fibonacci a executar en parallel"
	exit
fi

echo $1

i=0
while [ $i -lt $1 ]
do
	/usr/bin/time ./fib 45&
	i=`expr $i + 1` 
done
