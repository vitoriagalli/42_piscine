/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:37:29 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/03 22:41:03 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str	*stock;
	int			i;

	stock = ft_strs_to_tab(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_show_tab(&stock[i++]);
		printf("\n");
	}
	free(stock);
	return (0);
}
