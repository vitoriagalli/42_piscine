# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/04 00:34:55 by vscabell          #+#    #+#              #
#    Updated: 2020/09/04 03:12:05 by vscabell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

SRC =	ft_display_file.c

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
