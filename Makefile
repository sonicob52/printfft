# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 15:35:01 by frgarci2          #+#    #+#              #
#    Updated: 2023/11/24 12:16:10 by frgarci2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

SRC = ft_printp.c \
	  ft_printn.c \
	  ft_printu.c \
	  ft_printf.c \
	  ft_printc.c \
	  ft_printh.c \
	  ft_prints.c

OBJ = $(SRC:.c=.o)


$(NAME): all

all: $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
