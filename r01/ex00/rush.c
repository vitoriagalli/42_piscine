/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:20:13 by tmendes-          #+#    #+#             */
/*   Updated: 2020/09/07 02:34:02 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		**allocate_matrix(int **mat);
void	free_matrix(int **mat);
int		is_valid(int number, int **tower, int rc[2], int **idx);
int		**read_input(char **argv, int **idx);
int		is_error(int argc, char **argv);
int		*constant(int *vec, int num);
int		*calculate_idx(int *bin, int *k, int *idx);
void	*plot_result(int **tower);
int		*return_aux(int rc[2]);
int		**m_zeros(int **tower);

/*
** Esta funcao calcula os valores dos indices laterias para uma linha (r)
** e para uma coluna (c). Para calcular esses indices e preciso saber o tamanho
** do tabuleiro s (size) e a matriz que representa o tabuleiro **mat.
** IMPORTANTE: uma torre e vista sempre que ela e maior que as anteriores a ela
** O binario "bin" indica se uma torre e maior ou igual a uma dada torre da
** linha ou coluna
** Se multiplicarmos o "bin" de comparacao das torres anteriores e esse valor
** for 1 entao a torre pode ser observada e idx e aumantado de um ponto.
*/

int		*viewpoint_idxs(int **mat, int s, int r, int c)
{
	int *k;
	int *bin;
	int *idx;

	k = (int *)malloc(4 * 4);
	bin = (int *)malloc(4 * 4);
	idx = (int *)malloc(4 * 4);
	idx = constant(idx, 0);
	k[0] = 0;
	while (k[0] < s)
	{
		bin = constant(bin, 1);
		k[1] = 0;
		while (k[1] <= k[0])
		{
			bin[2] = bin[2] * (mat[r][k[0]] >= mat[r][k[1]]);
			bin[3] = bin[3] * (mat[r][s - k[0] - 1] >= mat[r][s - k[1] - 1]);
			bin[0] = bin[0] * (mat[k[0]][c] >= mat[k[1]][c]);
			bin[1] = bin[1] * (mat[s - k[0] - 1][c] >= mat[s - k[1] - 1][c]);
			k[1]++;
		}
		idx = calculate_idx(bin, k, idx);
		k[0]++;
	}
	return (idx);
}

/*
** Esta funcao compara os indices dados como input com os indices calculados
** para uma linha ou para uma coluna.
** Se o indice calculado for igual ao do input, esta funcao retorna 1
*/

int		is_valid_idx(int number, int **tower, int rc[2], int **idx)
{
	int *inv;

	tower[rc[0]][rc[1]] = number;
	inv = viewpoint_idxs(tower, 4, rc[0], rc[1]);
	tower[rc[0]][rc[1]] = 0;
	if (rc[1] == 3)
	{
		if (inv[2] != idx[2][rc[0]] || inv[3] != idx[3][rc[0]])
			return (0);
	}
	if (rc[0] == 3)
	{
		if (inv[0] != idx[0][rc[1]] || inv[1] != idx[1][rc[1]])
			return (0);
	}
	return (1);
}

/*
**Esta funcao avalia se um numero e valido em uma dada posicao de
**linha e coluna avaliando se nao tem esse numer ja na linha e coluna
**em questao. (Apenas um numero por linha e por coluna).
*/

int		is_valid(int number, int **tower, int rc[2], int **idx)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (tower[i][rc[1]] == number)
			return (0);
		if (tower[rc[0]][i] == number)
			return (0);
		i++;
	}
	return (is_valid_idx(number, tower, rc, idx));
}

/*
** Esta funcao calcula o recursive backtrackin do problema
** Ele inicializa com nextnum = 1 e pra cada posicao ele avalia
** se o numero e valido. Mas ele nao avalia so o numero, ele avalia
** o numero e todos os numeros que vem depois dele.
*/

int		tower_recursive(int **tower, int rc[2], int **idx)
{
	int nextnum;

	nextnum = 1;
	if (rc[0] == 4)
		return (1);
	while (nextnum < 5)
	{
		if (is_valid(nextnum, tower, rc, idx))
		{
			tower[rc[0]][rc[1]] = nextnum;
			if (tower_recursive(tower, return_aux(rc), idx))
				return (1);
		}
		tower[rc[0]][rc[1]] = 0;
		nextnum++;
	}
	return (0);
}

/*
** So para o main nao ficar triste, vou colocar um comentario aqui tambem
** Acho que ele esta bem intuitivo, somente lembar que inicializamos
** os ponteiros como NULL pra nao dar erro de compilacao.
** Falow time ! \o/
*/

int		main(int argc, char **argv)
{
	int		**idx;
	int		**tower;
	int		rc[2];

	idx = NULL;
	tower = NULL;
	if (is_error(argc, argv) == 0)
		write(1, "Error\n", 6);
	else
	{
		tower = allocate_matrix(tower);
		idx = allocate_matrix(idx);
		idx = read_input(argv, idx);
		tower = m_zeros(tower);
		rc[0] = 0;
		rc[1] = 0;
		tower_recursive(tower, rc, idx);
		plot_result(tower);
		free_matrix(tower);
		free_matrix(idx);
	}
	return (0);
}
