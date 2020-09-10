/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:00:16 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/23 21:48:34 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_matrix_char(int **matrix, int *dim)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < dim[0])
	{
		j = 0;
		while (j < dim[1])
		{
			c = matrix[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_min_value(int val1, int val2, int val3)
{
	int min;

	min = val1;
	if (val2 < min)
		min = val2;
	if (val3 < min)
		min = val3;
	return (min);
}

int		ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
