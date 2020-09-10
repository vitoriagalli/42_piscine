/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:06:42 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/28 23:25:14 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10; b = 2; ft_div_mod(a, b, &div, &mod);
	printf("a = %i b = %i div = %i mod = %i\n", a, b, div, mod);

	a = 7; b = 2; ft_div_mod(a, b, &div, &mod);
	printf("a = %i b = %i div = %i mod = %i\n", a, b, div, mod);

	a = 586; b = 12; ft_div_mod(a, b, &div, &mod);
	printf("a = %i b = %i div = %i mod = %i\n", a, b, div, mod);
}
