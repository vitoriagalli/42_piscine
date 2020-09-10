/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:26:48 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/28 23:34:23 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int	a;
	int	b;

	a = 10; b = 2;
	printf("a = %i b = %i ", a, b);
 	ft_ultimate_div_mod(&a, &b);
	printf("div = %i mod = %i\n", a, b);

	a = 7; b = 2;
	printf("a = %i b = %i ", a, b);
 	ft_ultimate_div_mod(&a, &b);
	printf("div = %i mod = %i\n", a, b);

	a = 586; b = 12;
	printf("a = %i b = %i ", a, b);
 	ft_ultimate_div_mod(&a, &b);
	printf("div = %i mod = %i\n", a, b);

}
