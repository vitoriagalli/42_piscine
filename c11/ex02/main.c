/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:20:56 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 15:05:14 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

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

void	test(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		printf("%s, ", tab[i++]);
	printf("\nreturn = %i\n\n", ft_any(tab, &ft_str_lower));
}

int		main(void)
{
	char	*tab1[] = {"1564", "*  (()\\", "HELLO WORLD", "42s", 0};
	char	*tab2[] = {"", 0};
	char	*tab3[] = {0};

	test(tab1);
	test(tab2);
	test(tab3);
}
