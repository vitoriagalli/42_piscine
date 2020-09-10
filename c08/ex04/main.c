/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:37:29 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/03 22:20:01 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int main (int argc, char **argv)
{
	t_stock_str *stock;
	int i;

	stock = ft_strs_to_tab(argc, argv);
	i = 1;
	while (i < argc)
	{
		printf("----- %ia cadeia -----\n", i);
		printf("size: \t\t%i\n", stock[i].size);
		printf("str: \t\t%s\n", stock[i].str);
		printf("endereco str: \t%p\n", &stock[i].str);
		printf("copy: \t\t%s\n", stock[i].copy);
		printf("endereco copy: \t%p\n\n", &stock[i].copy);
		i++;
	}
	free (stock);
	return (0);
}
