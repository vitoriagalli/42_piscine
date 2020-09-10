/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:48:38 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 01:16:05 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** fibonacci sequence
** 0 1 1 2 3 5 8 13 21 34 55
**  0 0 1 2 2 3 5  8  13 21
*/

int		ft_fibonacci(int index);

void	test(int index)
{
	printf("index = %i, fibonacci = %i\n", index, ft_fibonacci(index));
}


int		main(void)
{
	test(0);	// 0
	test(1);	// 1
	test(2);	// 1
	test(3);	// 2
	test(4);	// 3
	test(5);	// 5
	test(6);	// 8
	test(7);	// 13
	test(8);	// 21
}

