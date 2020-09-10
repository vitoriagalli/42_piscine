/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 22:54:49 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/28 22:57:54 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int	a = 10;
	int	b = 42;

	printf("a = %i b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("a = %i b = %i\n", a, b);
}
