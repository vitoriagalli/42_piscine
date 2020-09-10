/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:48:38 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/30 23:59:56 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int		main(void)
{
	printf("%i! = %i\n", -4, ft_iterative_factorial(-4));
	printf("%i! = %i\n", 0, ft_iterative_factorial(0));
	printf("%i! = %i\n", 1, ft_iterative_factorial(1));
	printf("%i! = %i\n", 2, ft_iterative_factorial(2));
	printf("%i! = %i\n", 3, ft_iterative_factorial(3));
	printf("%i! = %i\n", 4, ft_iterative_factorial(4));
	printf("%i! = %i\n", 10, ft_iterative_factorial(10));

}
