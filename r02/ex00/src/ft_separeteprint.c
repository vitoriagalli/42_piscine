/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_separeteprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:21:43 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/20 23:20:40 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_printsin(char *n, t_list ***super_list, int i, int *print_thousand)
{
	if (i != 0)
		ft_putchar(' ');
	print_list(super_list[SINGLE_D][n[i] - '0']);
	*print_thousand = 1;
	return (1);
}

int	ft_printten(char *n, t_list ***super_list, int i, int *print_single)
{
	if (n[i] > '1')
	{
		if (i != 0)
			ft_putchar(' ');
		print_list(super_list[TEN_MUL][n[i] - '0' - 2]);
		*print_single = 1;
	}
	if (n[i] == '1')
	{
		if (i != 0)
			ft_putchar(' ');
		print_list(super_list[TWO_D][n[i + 1] - '0']);
		*print_single = 0;
	}
	return (1);
}

int	ft_printtwod(char *n, t_list ***super_list, int *i, int *print_single)
{
	if (n[*i] > '1')
	{
		if (*i != 0)
			ft_putchar(' ');
		print_list(super_list[TEN_MUL][n[*i] - '0' - 2]);
	}
	if (n[*i] == '1')
	{
		if (*i != 0)
			ft_putchar(' ');
		print_list(super_list[TWO_D][n[*i + 1] - '0']);
		*print_single = 0;
	}
	++*i;
	return (0);
}

int	ft_printhundred(t_list ***super_list, int *print_thousand)
{
	ft_putchar(' ');
	print_list(super_list[HUNDRED][0]);
	*print_thousand = 1;
	return (1);
}

int	ft_printtenpow(t_list ***super_list, int len, int *print_thousand)
{
	ft_putchar(' ');
	print_list(super_list[TEN_POW][(len - 4) / 3]);
	print_thousand = 0;
	return (1);
}
