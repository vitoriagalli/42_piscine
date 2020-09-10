/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 22:10:00 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 22:50:32 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

void	test(char **tab)
{
	int		i;

	i = 0;
	ft_sort_string_tab(tab);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("\n");
}

int		main(void)
{
	char	*tab1[] = {"Zebra", "clock", "aluia", "SP", 0};
	char	*tab2[] = {"42 SP", "", 0};
	char	*tab3[] = {0};

	test(tab1);
	test(tab2);
	test(tab3);
}
