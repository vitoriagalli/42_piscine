/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:28:44 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 15:38:27 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int		main(void)
{
	int	tab[3] = {-2147483648, 0, 2147483647};

	ft_foreach(tab, 3, &ft_putnbr);
	ft_foreach(tab, 3, NULL);
	ft_foreach(NULL, 3, &ft_putnbr);
}
