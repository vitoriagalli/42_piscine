/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:38:19 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/23 20:51:11 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		**ft_map(char *buf, int *dim_idx, char *par, int **matrix)
{
	int rc[2];
	int i;

	i = dim_idx[2] + 1;
	rc[0] = 0;
	while (rc[0] < dim_idx[0])
	{
		rc[1] = 0;
		while (rc[1] < dim_idx[1])
		{
			if (buf[i] == par[0])
			{
				matrix[rc[0]][rc[1]] = 1;
				rc[1]++;
			}
			else if (buf[i] == par[1])
			{
				matrix[rc[0]][rc[1]] = 0;
				rc[1]++;
			}
			i++;
		}
		rc[0]++;
	}
	return (matrix);
}

void	ft_calculate_aux(int *rc, int **matrix, int *max)
{
	int min;

	if (!(rc[0] == 0 || rc[1] == 0 || matrix[rc[0]][rc[1]] == 0))
	{
		min = ft_min_value((matrix[rc[0] - 1][rc[1]]),
				(matrix[rc[0] - 1][rc[1] - 1]),
				(matrix[rc[0]][rc[1] - 1]));
		matrix[rc[0]][rc[1]] = min + 1;
	}
	if (matrix[rc[0]][rc[1]] > max[2])
	{
		max[0] = rc[0];
		max[1] = rc[1];
		max[2] = matrix[rc[0]][rc[1]];
	}
}

int		*ft_calculate(int **matrix, int *dim, int *max)
{
	int rc[2];

	max[2] = 0;
	rc[0] = 0;
	while (rc[0] < dim[0])
	{
		rc[1] = 0;
		while (rc[1] < dim[1])
		{
			ft_calculate_aux(rc, matrix, max);
			rc[1]++;
		}
		rc[0]++;
	}
	return (max);
}

void	ft_map_final_aux(char buf, int **matrix, int *max_full, int *rc)
{
	if (rc[0] <= max_full[0] && rc[0] >= (max_full[0] - max_full[2] + 1)
			&& rc[1] <= max_full[1] && rc[1] >= (max_full[1] - max_full[2] + 1))
	{
		matrix[rc[0]][rc[1]] = max_full[3];
		rc[1]++;
	}
	else if (buf != '\n')
	{
		matrix[rc[0]][rc[1]] = buf;
		rc[1]++;
	}
}

int		**ft_map_final(char *buf, int *dim_idx, int **matrix, int *max_full)
{
	int rc[2];
	int i;

	i = dim_idx[2] + 1;
	rc[0] = 0;
	while (rc[0] < dim_idx[0])
	{
		rc[1] = 0;
		while (rc[1] < dim_idx[1])
		{
			ft_map_final_aux(buf[i], matrix, max_full, rc);
			i++;
		}
		rc[0]++;
	}
	return (matrix);
}
