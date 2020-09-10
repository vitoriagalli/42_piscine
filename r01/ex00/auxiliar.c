/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:16:39 by tmendes-          #+#    #+#             */
/*   Updated: 2020/09/07 02:33:21 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** Esta funcao atribui o valor especificado em "num"
**  aos componentes do vetor *vec
*/

int		*constant(int *vec, int num)
{
	int i;

	i = 0;
	while (i < 4)
	{
		vec[i] = num;
		i++;
	}
	return (vec);
}

/*
** Esta funcao auxilia no calculo dos indices laterais.
** Se uma componente do vetor bin for 1, ela incrementa o valor
** correspondente de idx Ex: se bin[2] = 1 entao idx[2]++
** Criada somente pra atender as especificacoes de numero de linhas.
** bin ( vetor de binarios ) *k (vetor de contadores)
** idx (vetor de indices que armazena os indices laterias.
*/

int		*calculate_idx(int *bin, int *k, int *idx)
{
	k[2] = 0;
	while (k[2] < 4)
	{
		if (bin[k[2]] == 1)
			idx[k[2]]++;
		k[2]++;
	}
	return (idx);
}

/*
** Funcao usada para plotar o resultado final do jogo
*/

void	plot_result(int **tower)
{
	int		i;
	int		j;
	char	str;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			str = tower[i][j] + '0';
			write(1, &str, 1);
			if (j == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

/*
** Esta funcao serve apenas para criar um vetor auxiliar que
** permite trabalhar com os valores do vetor rc (rows and columns)
** em um dado instante sem moficar o veror rc.
** Criada apenas para atender as restricoes de linhas
** Serve pra saber onde posicionar o proximo numero na matriz
** Se for terceira coluna pula uma linha, caso contrario vai pra proxima coluna.
*/

int		*return_aux(int rc[2])
{
	int *aux;

	aux = (int *)malloc(2 * 4);
	if (rc[1] == 3)
	{
		aux[0] = rc[0] + 1;
		aux[1] = 0;
	}
	else
	{
		aux[1] = rc[1] + 1;
		aux[0] = rc[0];
	}
	return (aux);
}

/*
** Esta funcao inicia uma torre de matriz com zeros.
** Torre da matriz e onde o jogo e armazenado
*/

int		**m_zeros(int **tower)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tower[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tower);
}
