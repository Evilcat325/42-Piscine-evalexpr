# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 00:57:24 by seli              #+#    #+#              #
#    Updated: 2018/10/07 20:25:22 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./

SOURCES = ft_main.c ft_eval.c ft_op.c ft_stdio.c ft_string.c ft_check.c

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

clean:

debug:
	@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES) -g;

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
