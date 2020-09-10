# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/04 00:34:55 by vscabell          #+#    #+#              #
#    Updated: 2020/09/04 22:02:59 by vscabell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	do-op

SRC =	main.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_atoi.c \
		ft_putnbr.c \
		ft_operations.c

OBJ =	$(patsubst %.c, %.o, $(SRC))

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
