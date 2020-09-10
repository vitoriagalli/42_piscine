/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:48:38 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 00:16:08 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

void	test(int n, int power)
{
	printf("%i^%i = %i\n", n, power, ft_iterative_power(n, power));
}

int		main(void)
{
	test(2, 0);
	test(2, 3);
	test(2, 4);
	test(3, 3);
	test(-5, 3);
	test(-5, 4);
}
