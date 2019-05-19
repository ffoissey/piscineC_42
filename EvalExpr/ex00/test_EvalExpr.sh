echo "\n\n\033[0m##############################    NORME     ##############################"

norminette *.c *.h

echo "\n\n\033[0m##############################    COMPIL    ##############################"

gcc -Wall -Wextra -Werror -fsanitize=address *.c -o eval_expr

echo "\n\n\033[0m##############################  TEST START  ##############################"

echo "\033[0m____________________________\n\n>>>>: Result [BC]\n<<<<: Result [eval_expr]\n____________________________\n"

#CREATE TMP FILES
touch bc;
touch EE;

#####################################

VAR='5 + 12'

echo "\n\n\033[0mTest 1 : '$VAR' "

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='-5 + 6 - 7'

echo "\n\033[0mTest 2 : $VAR "

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='5 + 6 % 7 + 8'

echo "\n\033[0mTest 3 : $VAR "

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='5 + 6 * 7 - 8 % ( 9 + 8 )'

echo "\n\033[0mTest 4 : $VAR "

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

echo "\n\033[0mTest 5 : '0' "

echo "\nResult : "
./eval_expr "0";
echo "\n"
#IN FILE
./eval_expr "0" > EE;
echo "0" > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='(-5)'

echo "\n\033[0mTest 6 : $VAR "

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='( -5 + 6 * ( 7 + 8 / 9 ) )'

echo "\n\033[0mTest 7 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='( -5 + 6 * ( 7 + ( -8 ) / 9 ) - ( 48 - 100 ) * ( 3 - 7 ) )'

echo "\n\033[0mTest 8 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='- ( -5 + 6 ) * ( ( 10 + ( -8 ) / 9 ) + ( 4800 - 100 ) * ( 3 - 7 ) )'

echo "\n\033[0mTest 9 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='- ( ( -5 + 6 ) * ( 10 + ( -8 ) / 9 ) + ( 4800 - 100 ) * ( 3 - 7 ) )'

echo "\n\033[0mTest 10 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='- ( ( -5 + 103 ) * ( 10 + ( -8 ) / ( -9 ) ) + ( 0 - 100 ) * ( 3 - 7 ) * ( -5 ) )'

echo "\n\033[0mTest 11 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1'

echo "\n\033[0mTest 12 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

echo "\n\n\033[0m#############################     TEST CORREC     ############################"

VAR='3 - 2'

echo "\n\033[0mTest_m 0 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='1 + 3 * 4 % 2'

echo "\n\033[0mTest_m 1 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 2'

echo "\n\033[0mTest_m 2 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='42'

echo "\n\033[0mTest_m 3 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='-42'

echo "\n\033[0mTest_m 4 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='1 + 12'

echo "\n\033[0mTest_m 5 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='3+42*(1-2/(3+4)-1%21)+1'

echo "\n\033[0mTest_m 6 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='1 +2 *( - 1 -1 *(22+2*1)+1 * ( - 1 + 1 * 1))'

echo "\n\033[0mTest_m 7 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

#####################################

VAR='((((((((((0))))))))))'

echo "\n\033[0mTest_m 8 : $VAR"

echo "\nResult : "
./eval_expr "$VAR";
echo "\n"
#IN FILE
./eval_expr "$VAR" > EE;
echo "$VAR" | bc > bc;

if diff EE bc
then
	echo "\033[32mOK"
else
	echo "\033[31mWRONG"
fi

echo "\n\n\033[0m#############################      MAKEFILE     ###########################"

#REMOVE TMP FILES
rm bc EE

make fclean
make
make re
make clean
make fclean

echo "\n\n\033[0m#############################        END        ###########################"
