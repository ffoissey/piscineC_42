VAR=`ifconfig | grep inet | grep -v inet6 | cut -d ' ' -f 2`

if [$VAR = ""] 2> /dev/null
then
	echo "I am lost !"
else
	echo $VAR | tr " " "\n"
fi
