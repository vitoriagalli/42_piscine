/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 00:39:14 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/01 01:17:55 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len;

	ptr = NULL;
	if (min >= max)
		return (NULL);
	len = max - min;
	if (!(ptr = (int*)malloc(len * sizeof(int))))
		return (NULL);
	len--;
	max--;
	while (len >= 0)
	{
		ptr[len] = max;
		len--;
		max--;
	}
	return (ptr);
}
