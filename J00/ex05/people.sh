ldapsearch -xLLL uid="z*" cn | grep cn | sed 's/cn: //' | sort -fr
