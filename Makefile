# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 02:31:22 by amehmeto          #+#    #+#              #
#    Updated: 2017/12/20 04:44:22 by amehmeto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = ft_ls
FILE = src/main.c \
		src/lst_crud.c

OBJ = $(FILE:.c=.o)
CC = gcc
FLAGS = -Weverything

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../Libft
	$(CC) $(FLAGS) -o $(NAME) $(notdir $(OBJ)) ../Libft/libft.a 

%.o: %.c src/ft_ls.h
	$(CC) -c $< $(FLAGS)

clean:
	make -C ../Libft clean
	rm -f $(OBJ)

fclean: clean
	make -C ../Libft fclean
	rm -f $(NAME)

re: fclean all
