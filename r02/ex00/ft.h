/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 09:45:32 by dicisner          #+#    #+#             */
/*   Updated: 2020/09/07 03:20:56 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define SINGLE_D 0
# define TWO_D 1
# define TEN_MUL 2
# define HUNDRED 3
# define TEN_POW 4
# define BUFF_SIZE 64

typedef	struct s_list	t_list;

struct	s_list
{
	char	data;
	t_list	*next;
};

typedef struct s_read_vars	t_read_vars;

struct	s_read_vars
{
	char	c;
	int		i;
	int		fd;
	int		is_valid;
	int		w_trimmed;
	int		ret;
};

t_list	*create_elem(char c);
t_list	*push_back(t_list *list, char c);
void	print_list(t_list *list);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
t_list	***read_file(t_list ***super_list);
t_list	***initialize(t_list ***super_list);
int		*validate_list(t_list *list);
int		ft_printsin(char *n, t_list ***super_list, int i, int *print_thousand);
int		ft_printhundred(t_list ***super_list, int *print_thousand);
int		ft_printten(char *n, t_list ***super_list, int i, int *print_single);
int		ft_printtenpow(t_list ***super_list, int len, int *print_thousand);
int		ft_printtwod(char *n, t_list ***super_list, int *i, int *print_single);
void	ft_printnumbers(int *len, int *i, char *n, t_list ***superlist);
void	ft_validate_digits(int n, int *arr, int zeros);
void	convert_number(char *n, t_list ***super_list);
void	ft_printjustone(int i, char *n, t_list ***super_list);
int		validate(char *str);

#endif
