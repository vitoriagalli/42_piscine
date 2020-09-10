/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 23:58:15 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 20:20:51 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
	}
	if (n / 10 > 0)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}