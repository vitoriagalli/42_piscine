/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 10:25:22 by dicisner          #+#    #+#             */
/*   Updated: 2019/10/20 21:45:45 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

t_list	***initialize(t_list ***super_list)
{
	super_list = malloc(sizeof(t_list**) * 5);
	super_list[SINGLE_D] = malloc(sizeof(t_list*) * 10);
	super_list[TWO_D] = malloc(sizeof(t_list*) * 10);
	super_list[TEN_MUL] = malloc(sizeof(t_list*) * 8);
	super_list[HUNDRED] = malloc(sizeof(t_list*) * 1);
	super_list[TEN_POW] = malloc(sizeof(t_list*) * 12);
	return (super_list);
}

void	convert_number(char *n, t_list ***super_list)
{
	int len;
	int i;

	len = ft_strlen(n);
	i = 0;
	if (len == 1 && n[i] == '0')
		print_list(super_list[SINGLE_D][n[i] - '0']);
	ft_printnumbers(&len, &i, n, super_list);
}

int		*validate_list(t_list *list)
{
	t_list	*tmp;
	int		i;
	int		n;
	int		zeros;
	int		*arr;

	arr = malloc(sizeof(int) * 2);
	arr[0] = -1;
	tmp = list->next;
	i = 0;
	n = 0;
	zeros = 0;
	while (tmp)
	{
		if (n < 100)
			n = n * 10 + tmp->data - 48;
		else if (tmp->data == '0')
			zeros++;
		else if (tmp->data != '0')
			return (arr);
		tmp = tmp->next;
	}
	ft_validate_digits(n, arr, zeros);
	return (arr);
}
