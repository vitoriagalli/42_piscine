/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:06:17 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 14:17:27 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	ft_timestwo(int n)
{
	return (n * 2);
}

int		main(void)
{
	int	tab[8] = {-10, -5, 0, 4, 8, 125};
	int	i;
	int	*ret;

	ret = ft_map(tab, 6, &ft_timestwo);
	i = 0;
	while (i < 6)
	{
		printf("%i ", ret[i]);
		i++;
	}
	free(ret);
}
