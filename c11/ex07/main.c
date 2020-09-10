/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 22:10:00 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 23:35:28 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	test(char **tab)
{
	int		i;

	i = 0;
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
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
