/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:51:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 00:04:47 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int	i;
	int	size;
	int	array[] = {1, 2, 3, 4, 5};

	size = 5;
	i = -1;
	while (++i < size)
		printf("%i ", array[i]);
	printf("\n");

	ft_rev_int_tab(array, size);

	i = -1;
	while (++i < size)
		printf("%i ", array[i]);
	printf("\n");
}
