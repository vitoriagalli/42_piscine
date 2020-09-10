/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:34:47 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/09 07:32:00 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_values(int a, int b, int c, int d)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(' ');
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	if (!(a == 9 && b == 8 && c == 9 && d == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		i[4];

	i[0] = 0;
	while (i[0] <= 9)
	{
		i[1] = 0;
		while (i[1] <= 9)
		{
			i[2] = 0;
			while (i[2] <= 9)
			{
				i[3] = 0;
				while (i[3] <= 9)
				{
					if (i[0] < i[2] || (i[0] == i[2] && i[1] < i[3]))
						ft_print_values(i[0], i[1], i[2], i[3]);
					i[3]++;
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
