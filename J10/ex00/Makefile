NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEAD = includes/ft.h

OBJS = ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(HEAD)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
