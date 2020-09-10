# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/04 00:34:55 by vscabell          #+#    #+#              #
#    Updated: 2020/09/04 03:24:22 by vscabell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_cat

SRC =	ft_cat.c

OBJ =	$(patsubst %.c, %.o, $(SRC))

CC = gcc
CFLAGS = -Wall -Werror -Wextra

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
