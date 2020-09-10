/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:48:38 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 22:26:02 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

void	test(int n)
{
	printf("n = %i ___%i\n", n, ft_is_prime(n));
}

int		main(void)
{
	printf ("_1_ IS PRIME\n_0_ IS NOT PRIME\n");
	test(0);
	test(1);
	test(-2);
	test(+2);
	test(3);
	test(5);
	test(7);
	test(11);
	test(13);
	test(17);
	test(19);
	test(-751);
	test(-997);
	test(-13033);
	test(104707);
	test(1299709);
	test(179424673);

	test(2147483647);	// maior value int -> Mersenne Prime
	test(21);
	test(-437);
	test(-20687);
	test(9519201);
	test(370362963);	// 33333 x 11111
}
