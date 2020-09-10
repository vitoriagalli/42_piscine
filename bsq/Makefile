# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 21:12:12 by vscabell          #+#    #+#              #
#    Updated: 2020/09/09 03:11:01 by vscabell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BSQ

SRC_DIR	=	src
SRC		=	$(SRC_DIR)/main.c \
			$(SRC_DIR)/aux.c \
			$(SRC_DIR)/map.c \
			$(SRC_DIR)/validate.c

OBJ_DIR	=	.obj
OBJ		=	$(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))
CC		=	clang
CFLAGS	=	-Wall -Werror -Wextra -g
HEAD	=	-I.
RM		=	/bin/rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(HEAD) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
