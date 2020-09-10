/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:48:38 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 00:07:01 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	printf("%i! = %i\n", -4, ft_recursive_factorial(-4));
	printf("%i! = %i\n", 0, ft_recursive_factorial(0));
	printf("%i! = %i\n", 1, ft_recursive_factorial(1));
	printf("%i! = %i\n", 2, ft_recursive_factorial(2));
	printf("%i! = %i\n", 3, ft_recursive_factorial(3));
	printf("%i! = %i\n", 4, ft_recursive_factorial(4));
	printf("%i! = %i\n", 10, ft_recursive_factorial(10));
}
