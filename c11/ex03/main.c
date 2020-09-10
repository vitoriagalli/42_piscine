/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 15:08:37 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 15:51:28 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int		ft_str_lower(char *s)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (!(*s >= 'a' && *s <= 'z'))
			return (0);
		s++;
	}
	return (1);
}

void	test(char **tab, int length)
{
	int	i;

	i = 0;
	while (tab[i])
		printf("%s, ", tab[i++]);
	printf("\nreturn = %i\n\n", ft_count_if(tab, length, &ft_str_lower));
}

int		main(void)
{
	char	*tab1[] = {"1564", "*  (()\\", "HELLO WORLD", "42s", 0};
	char	*tab2[] = {"15a64", "piscine", "HELLO WORLD", "42s", 0};
	char	*tab3[] = {"ala", "pow", 0};

	test(tab1, 4);
	test(tab2, 4);
	test(tab3, 2);
}

