echo "\n\n\033[0m##############################    COMPIL    ##############################"

gcc -Wall -Wextra -Werror -fsanitize=address,undefined *.c -o bsq

echo "\n\n\033[0m##############################  TEST START  ##############################"

echo "\033[0m____________________________\n\n>>>>: Result [REF]\n<<<<: Result [YOUR]\n____________________________\n"

#CREATE TMP FILES

touch original_src;
touch REF;
touch YOUR;

#####################################

VAR=''

echo "\n\n\033[0mTest 1 : echo \n-n '' "

echo "\nResult : "
echo -n "" | ./bsq ;
echo "\n"
#IN FILE
echo -n "" | ./bsq_ref > REF 2> /dev/null;
echo -n "" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR=''

echo "\n\n\033[0mTest 2 : echo \n'' "

echo "\nResult : "
echo "" | ./bsq ;
echo "\n"
#IN FILE
echo "" | ./bsq_ref > REF 2> /dev/null;
echo "" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='10.ox'

echo "\n\n\033[0mTest 3 : echo \n$VAR "

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='2.o.'

echo "\n\n\033[0mTest 4 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='2.ox\n.oo..\n.o..p'

echo "\n\n\033[0mTest 5 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='2.ox\n.oox.\n..oo.'

echo "\n\n\033[0mTest 6 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='3.ox\n.o\noo\n..o'

echo "\n\n\033[0mTest 7 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='3.ox\n.\no'

echo "\n\n\033[0mTest 8 :\n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='3.ox\n.\no\n.\n.'

echo "\n\n\033[0mTest 9 :\n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

echo "\n\n\033[0mTest 11 : echo \n-n\n3.ox\n.o\no.\n.."

echo "\nResult : "
echo -n "3.ox\n.o\no.\n.." | ./bsq
echo "\n"
#IN FILE
echo -n "3.ox\n.o\no.\n.." | ./bsq_ref > REF 2> /dev/null;
echo -n "3.ox\n.o\no.\n.." | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='+1.ox\n...o.'

echo "\n\n\033[0mTest 12 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='-1.ox\n...o.'

echo "\n\n\033[0mTest 13 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='1.ox\n.'

echo "\n\n\033[0mTest 14 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='1.ox\no'

echo "\n\n\033[0mTest 15 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\n.\n.\no\n.'

echo "\n\n\033[0mTest 16 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\n.o\n..\n..\n.o'

echo "\n\n\033[0mTest 17 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\nooo\nooo\nooo\nooo'

echo "\n\n\033[0mTest 18 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\n....\n....\n....\n....'

echo "\n\n\033[0mTest 19 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\n.ooo\noooo\noooo\noooo'

echo "\n\n\033[0mTest 20 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;
echo "$VAR" | ./bsq_ref > REF;
echo "$VAR" | ./bsq > YOUR;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\noooo\noooo\noooo\nooo.'

echo "\n\n\033[0mTest 21 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\noooo\noo.o\noooo\noooo'

echo "\n\n\033[0mTest 22 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='4.ox\no.o.o\n.o.o.\no.o.o\n.o.o.'

echo "\n\n\033[0mTest 23 : echo \n$VAR"

echo "\nResult : "
echo "$VAR" | ./bsq ;
echo "\n"
#IN FILE
echo "$VAR" | ./bsq_ref > REF 2> /dev/null;
echo "$VAR" | ./bsq > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='10 10 2'

echo "\n\n\033[0mTest 24 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='100 100 14'

echo "\n\n\033[0mTest 25 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='200 250 3'

echo "\n\n\033[0mTest 26 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='-10 10 2'

echo "\n\n\033[0mTest 27 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='10 -10 2'

echo "\n\n\033[0mTest 28 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='0 10 2'

echo "\n\n\033[0mTest 29 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='10 0 2'

echo "\n\n\033[0mTest 30 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='1000 1000 50'

echo "\n\n\033[0mTest 31 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='2000 3000 90'

echo "\n\n\033[0mTest 32 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='100 500 13'

echo "\n\n\033[0mTest 33 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='2500 2500 2'

echo "\n\n\033[0mTest 34 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi

#####################################

VAR='10000 10000 100'

echo "\n\n\033[0mTest 35 : taille $VAR"

./gen_map $VAR > original_src;

echo "\nResult : "
./bsq original_src > YOUR;
echo "\n"
#IN FILE
./bsq_ref original_src > REF 2> /dev/null;
./bsq original_src > YOUR 2> /dev/null;

if diff YOUR REF 
then
	echo "\033[32mOK"
else
	echo "REF:\n"	
	cat REF
	echo "\nYOUR\n"	
	cat YOUR
	echo "\n"	
	echo "\033[31mWRONG"
fi


echo "\n\n\033[0m#############################      MAKEFILE     ###########################"

#REMOVE TMP FILES
rm REF YOUR original_src;

make fclean
make
make re
make clean
make fclean

echo "\n\n\033[0m##############################    NORME     ##############################"

norminette *.c *.h

echo "\n\n\033[0m#############################        END        ###########################"
