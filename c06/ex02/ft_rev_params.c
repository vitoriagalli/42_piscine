/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 23:23:21 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 23:33:03 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	argc--;
	while (argc > 0)
	{
		j = 0;
		while (argv[argc][j] != 0)
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
