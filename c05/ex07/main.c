/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:48:38 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 22:40:50 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

void	test(int n)
{
	printf("n = %i ___ next prime = %i\n", n, ft_find_next_prime(n));
}

int		main(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		test(i);
		i++;
	}

}
