/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 23:56:31 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/30 20:38:39 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
}
