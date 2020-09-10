/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:06:18 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 14:14:32 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret;

	if (!(tab) || !(f))
		return (NULL);
	if (!(ret = (int *)malloc(length * sizeof(int))))
		return (NULL);
	i = 0;
	while (i < length)
	{
		ret[i] = (f)(tab[i]);
		i++;
	}
	return (ret);
}
