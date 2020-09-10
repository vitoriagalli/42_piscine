/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 00:06:26 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 01:18:58 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int	i;
	int	size;
	int	array[] = {3, 21, 5, 7, 10, 33, 15, 42, 11};

	size = 9;
	i = -1;
	while (++i < size)
		printf("%i ", array[i]);
	printf("\n");

	ft_sort_int_tab(array, size);

	i = -1;
	while (++i < size)
		printf("%i ", array[i]);
	printf("\n");
}
