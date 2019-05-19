# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 14:50:19 by ffoissey          #+#    #+#              #
#    Updated: 2018/09/16 15:37:44 by ffoissey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAG = -Wall -Werror -Wextra
SRCS = eval_expr.c io.c main.c
OBJS = eval_expr.o io.o main.o

all: $(NAME)

$(NAME): obj
	@gcc $(FLAG) -o $(NAME) $(OBJS)

obj:
	@gcc $(FLAG) -c $(SRCS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
