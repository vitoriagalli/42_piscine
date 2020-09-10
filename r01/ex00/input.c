/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:21:01 by tmendes-          #+#    #+#             */
/*   Updated: 2020/09/07 02:29:34 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*viewpoint_idx(int mat[4][4], int size, int row, int col);
int		is_valid(int number, int tower[4][4], int row, int col, int idx[4][4]);
int		tower_recursive(int tower[4][4], int row, int col, int idx[4][4]);

/*
** Esta funcao le os inputs presentes em argv e passa para idx
** Notar que idx tem estrutura de matrix[4][4]
*/

int		**read_input(char **argv, int **idx)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	i = 0;
	while (i < 4 && c < 30)
	{
		j = 0;
		while (j < 4)
		{
			idx[i][j] = argv[1][c] - '0';
			c = c + 2;
			j++;
		}
		i++;
	}
	return (idx);
}

/*
** Esta funcao avalia se os inputs presentes em argv estao de acordo
** com o formato esperado pelo programa.
** Regras: 2 argumentos
** Arg[1]: executavel
** Arg[2]  16 numeros entre 1 e 4 separados por virgula.
*/

int		is_error(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 2)
	{
		i = 0;
		j = 0;
		while (argv[1][i] != '\0' && j < 16)
		{
			if (argv[1][i] >= '1' && argv[1][i] <= '4' &&
					(argv[1][i + 1] == ' ' || argv[1][i + 1] == '\0'))
				j++;
			else
				return (0);
			i = i + 2;
		}
		if (argv[1][31] != 0)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}

/*
** Esta funcao aloca memoria para um ponteiro de ponteiro (matriz)
** e retorna esta matriz ja alocada
*/

int		**allocate_matrix(int **mat)
{
	int		row;

	mat = (int **)malloc(4 * 8);
	row = 0;
	while (row < 4)
	{
		mat[row] = (int *)malloc(4 * 4);
		row++;
	}
	return (mat);
}

/*
** Esta funcao libera a memoria alocada para as matrizes anteriormente
*/

void	free_matrix(int **mat)
{
	int row;

	row = 0;
	while (row < 4)
	{
		free(mat[row]);
		row++;
	}
	free(mat);
}
