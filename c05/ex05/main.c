/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:48:38 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 21:26:47 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

void	test(int n)
{
	printf("number = %i, sqrt = %i\n", n, ft_sqrt(n));
}


int		main(void)
{
	test(-50);
	test(1);
	test(2);
	test(16);
	test(50);
	test(130);
	test(625);
	test(4096);
	test(31945104);		// ans: 5.652
	test(160022500);	// ans: 12.650
	test(2147483647);	// ans: 0
	test(2147395600);	// ans: 46.340
}
