/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 00:39:13 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/01 04:27:19 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

void	test(int min, int max)
{
	int	*array;
	int	i;
	int	range;

	array = ft_range(min, max);
	i = 0;
	range = max - min;
	while (i < range)
	{
		printf("%i ", array[i]);
		i++;
	}
	printf("\n");
}

int		main(void)
{
	test(-2, -10);
	test(-2, 4);
	test(-3, 3);
	test(-2147483648, -2147483640);
	test(-20, 15);
	test(3, 30);
	test(15, 20);
	test(2147483640, 2147483647);
}
