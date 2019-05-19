NAME = ft_cat
SRC = cat.c
FLAG = -Wextra -Werror -Wall
OBJ = cat.o

all: $(NAME)

$(NAME): obj
	@gcc -o $(NAME) $(FLAG) $(OBJ)

obj:
	@gcc -c $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
