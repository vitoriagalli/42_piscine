# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 10:29:58 by juolivei          #+#    #+#              #
#    Updated: 2020/09/07 03:27:24 by vscabell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

SRCDIR	=	src
SRC		=	$(SRCDIR)/convert_numbers.c \
			$(SRCDIR)/ft_printnumbers.c \
			$(SRCDIR)/ft_separeteprint.c \
			$(SRCDIR)/ft_validates.c \
			$(SRCDIR)/linked_list.c \
			$(SRCDIR)/read.c \
			$(SRCDIR)/utils.c \
			$(SRCDIR)/validate.c

OBJDIR	=	.obj
OBJS	=	$(patsubst $(SRCDIR)%.c, $(OBJDIR)%.o, $(SRC))

CC		= clang

CFLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I. $(OBJS) main.c -o $(NAME)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

