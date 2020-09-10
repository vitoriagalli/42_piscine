/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 13:49:40 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 04:18:40 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_error(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	return (1);
}

void	horizontal(int x, char c, char m, char f)
{
	ft_putchar(c);
	while (x > 2)
	{
		ft_putchar(m);
		x--;
	}
	if (x == 2)
		ft_putchar(f);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int tam;

	if (!(ft_check_error(x, y)))
		return ;
	tam = y;
	while (y)
	{
		if (tam == y)
		{
			horizontal(x, 'A', 'B', 'C');
			y--;
		}
		else if (y == 1)
		{
			horizontal(x, 'A', 'B', 'C');
			y--;
		}
		else
		{
			horizontal(x, 'B', ' ', 'B');
			y--;
		}
	}
}
