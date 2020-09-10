/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:25:21 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/23 20:51:35 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_idx_aux(char *buf, char *par, int *dim, int count_first_row)
{
	int i;
	int j;

	i = 0;
	while (buf[i] != 0 && i < (count_first_row - 3))
	{
		if (ft_is_number(buf[i]))
			dim[0] = dim[0] * 10 + (buf[i] - 48);
		else
			return (-1);
		i++;
	}
	j = 0;
	while (buf[i] != 0 && buf[i] != '\n')
	{
		if (ft_is_printable(buf[i]))
			par[j] = buf[i];
		else
			return (-1);
		i++;
		j++;
	}
	return (1);
}

int	ft_idx(char *buf, char *par, int *dim)
{
	int count_first_row;

	count_first_row = 0;
	while (buf[count_first_row] != 0 && buf[count_first_row] != '\n')
		count_first_row++;
	dim[0] = 0;
	if (ft_idx_aux(buf, par, dim, count_first_row) == -1)
		return (-1);
	if (dim[0] == 0)
		return (-1);
	return (count_first_row);
}

int	ft_validate_aux(char *buf, char *par, int *dim, int i)
{
	int count_row;
	int count_column;

	count_row = 0;
	count_column = -1;
	while (buf[i] != 0)
	{
		count_column++;
		if (buf[i] == '\n')
		{
			if (count_row == 0)
				dim[1] = count_column;
			else
			{
				if (count_column != dim[1])
					return (0);
			}
			count_row++;
			count_column = -1;
		}
		else if (!(buf[i] == par[0] || buf[i] == par[1]))
			return (0);
		i++;
	}
	return (count_row);
}

int	ft_validate(char *buf, char *par, int *dim)
{
	int i;
	int count_row;
	int idx;

	idx = ft_idx(buf, par, dim);
	if (idx < 4 || idx == -1 ||
			par[0] == par[1] || par[0] == par[2] || par[1] == par[2])
		return (0);
	i = idx + 1;
	count_row = ft_validate_aux(buf, par, dim, i);
	if (count_row != (dim[0]) || count_row == 0)
		return (0);
	return (idx);
}
