# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 13:47:50 by ffoissey          #+#    #+#              #
#    Updated: 2018/09/19 01:48:59 by ffoissey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = str.c io.c main.c bsq.c matrix.c
OBJS = main.o str.o io.o bsq.o matrix.o
HEAD = bsq.h 
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): obj
	@gcc $(FLAGS) $(OBJS) -o $(NAME)

obj:
	@gcc $(FLAGS) -c $(SRCS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
