echo "____NORME____\n\n"

norminette -R CheckForbiddenSourceHeader

echo "____COMPILATION____\n\n"

gcc -Wall -Wextra -Werror main.c ft_atoi.c

echo "____START TEST____\n"

echo "\n\ntest 1 \n\n"
./a.out "0"


echo "\n\ntest 2 \n\n"
./a.out "1"


echo "\n\ntest 3 \n\n"
./a.out "10"

echo "\n\ntest 4 \n\n"
./a.out "a198"

echo "\n\ntest 5 \n\n"
./a.out "19z8"

echo "\n\ntest 6 \n\n"
./a.out "- 154"

echo "\n\ntest 7\n\n"
./a.out "-154"

echo "\n\ntest 8\n\n"
./a.out "-2147483648"

echo "\n\ntest 9\n\n"
./a.out "+2147483647"

echo "\n\ntest 10\n\n"
./a.out "+-5647"

echo "\n\ntest 11\n\n"
./a.out "-569+47"

echo "\n\ntest 12\n\n"
./a.out "-789+47"

echo "\n\ntest 13\n\n"
./a.out "-789-47"

echo "\n\ntest 14\n\n"
./a.out "+789+47"

echo "\n\ntest 15\n\n"
./a.out "	684"

echo "\n\ntest 16\n\n"
./a.out "         78947"

echo "\n\ntest 17\n\n"
./a.out "         -684"

echo "\n\ntest 18\n\n"
./a.out "   -      9763"

echo "\n\ntest 19\n\n"
./a.out "   +      9763"

echo "\n\ntest 20\n\n"
./a.out "  000000000000000"

echo "____END____\n"

