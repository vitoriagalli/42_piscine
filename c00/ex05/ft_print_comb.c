/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:31:18 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/09 07:27:42 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_values(int cent, int dec, int unit)
{
	ft_putchar(cent + '0');
	ft_putchar(dec + '0');
	ft_putchar(unit + '0');
	if (!(cent == 7 && dec == 8 && unit == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	cent;
	int	dec;
	int	unit;

	cent = 0;
	while (cent <= 7)
	{
		dec = cent + 1;
		while (dec <= 8)
		{
			unit = dec + 1;
			while (unit <= 9)
			{
				ft_print_values(cent, dec, unit);
				unit++;
			}
			dec++;
		}
		cent++;
	}
}
