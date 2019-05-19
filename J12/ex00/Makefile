NAME = ft_display_file
SRC = display_file.c
FLAG = -Wextra -Werror -Wall
OBJ = display_file.o

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
