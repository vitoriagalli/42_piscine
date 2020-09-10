/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:37:07 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/03 22:44:41 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (!(dest = (char*)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*list;
	int			i;

	i = 0;
	list = malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		list[i].str = av[i];
		list[i].size = ft_strlen(av[i]);
		list[i].copy = ft_strdup(av[i]);
		i++;
	}
	list[i].str = 0;
	return (list);
}
