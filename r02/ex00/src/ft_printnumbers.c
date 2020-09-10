/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:05:33 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/20 22:46:21 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_printnumbers(int *len, int *i, char *n, t_list ***super_list)
{
	int print_thousand;
	int print_single;

	print_thousand = 1;
	print_single = 1;
	while (*len > 2)
	{
		if (n[*i] != '0' && (*len - 2) % 3 != 0 && print_single)
			print_single = ft_printsin(n, super_list, *i, &print_thousand);
		if ((*len - 3) % 3 == 0 && n[*i] != '0')
			print_single = ft_printhundred(super_list, &print_thousand);
		if ((*len - 2) % 3 == 0 && n[*i] != '0')
			print_thousand = ft_printten(n, super_list, *i, &print_single);
		if ((*len - 4) % 3 == 0 && print_thousand == 1)
			print_single = ft_printtenpow(super_list, *len, &print_thousand);
		--*len;
		++*i;
	}
	if ((*len - 2) % 3 == 0)
		ft_printtwod(n, super_list, i, &print_single);
	if (n[*i] != '0' && print_single)
		ft_printjustone(*i, n, super_list);
}

void	ft_printjustone(int i, char *n, t_list ***super_list)
{
	if (i != 0)
		ft_putchar(' ');
	print_list(super_list[SINGLE_D][n[i] - '0']);
}
