# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 13:47:50 by ffoissey          #+#    #+#              #
#    Updated: 2018/09/16 17:05:53 by apocchio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRCS = main.c read.c print.c compare.c rush.c manage_rush.c
OBJS = main.o read.o print.o compare.o rush.o manage_rush.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): obj
	@gcc $(FLAGS) $(OBJS) -o $(NAME)

obj:
	@gcc -c $(SRCS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
