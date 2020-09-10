/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 10:25:22 by dicisner          #+#    #+#             */
/*   Updated: 2020/09/07 03:19:42 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	t_list ***super_list;

	super_list = 0;
	super_list = read_file(super_list);
	if (argc > 2 || super_list == 0)
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (1);
	}
	else if (argc == 2)
	{
		if (validate(argv[1]) == 0)
		{
			ft_putstr("Error");
			ft_putchar('\n');
			return (1);
		}
		convert_number(argv[1], super_list);
		ft_putchar('\n');
	}
	return (0);
}
