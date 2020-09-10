/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 15:33:47 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 15:51:15 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		ft_cmp(int n1, int n2)
{
	return(n1 - n2);
}

void	test(int *tab, int length)
{
	int	i;

	i = 0;
	while (i < length)
		printf("%i, ", tab[i++]);
	printf("\nreturn = %i\n\n", ft_is_sort(tab, length, &ft_cmp));
}

int		main(void)
{
	int	tab1[5] = {-2147483648, -10, 33, 55, 2147483647};
	int	tab2[6] = {-10, -2, 0, 0, 7, 2147483647};
	int	tab3[3] = {0, 0, 0};
	int	tab4[4] = {55, 100, 566, -2};

	test(tab1, 5);
	test(tab2, 6);
	test(tab3, 3);
	test(tab4, 4);
}
