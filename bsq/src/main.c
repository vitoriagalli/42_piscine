/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:53:35 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/23 21:49:54 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		**ft_malloc(int **matrix, int *dim)
{
	int i;

	i = 0;
	matrix = (int **)malloc(dim[0] * sizeof(int *));
	while (i < dim[0])
	{
		matrix[i] = (int *)malloc(dim[1] * sizeof(int));
		i++;
	}
	return (matrix);
}

void	ft_clean(char *buf)
{
	int i;

	i = 0;
	while (buf[i] != '\0')
	{
		buf[i] = '\0';
		i++;
	}
}

int		ft_read(char *buf, char *file, int argc)
{
	int fd;
	int ret;

	if (argc == 1)
	{
		ret = read(STDIN_FILENO, buf, 800000);
		buf[ret] = '\0';
		fd = 0;
	}
	else
	{
		fd = open(file, O_RDONLY);
		ret = read(fd, buf, 8000000);
		buf[ret] = '\0';
		close(fd);
	}
	return (fd);
}

void	ft_execute(char *buf, int *dim_idx, char *par)
{
	int		**matrix;
	int		max[3];
	int		max_full[4];

	matrix = NULL;
	matrix = ft_malloc(matrix, dim_idx);
	matrix = ft_map(buf, dim_idx, par, matrix);
	ft_calculate(matrix, dim_idx, max);
	max_full[0] = max[0];
	max_full[1] = max[1];
	max_full[2] = max[2];
	max_full[3] = par[2];
	matrix = ft_map_final(buf, dim_idx, matrix, max_full);
	ft_print_matrix_char(matrix, dim_idx);
	free(matrix);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[8000001];
	char	par[3];
	int		dim_idx[3];

	i = 1;
	while (i < argc)
	{
		fd = ft_read(buf, argv[i], argc);
		dim_idx[2] = ft_validate(buf, par, dim_idx);
		if (dim_idx[2] == 0 || fd == -1)
			write(1, "map error\n", 10);
		else
			ft_execute(buf, dim_idx, par);
		ft_clean(buf);
		i++;
	}
	return (0);
}
