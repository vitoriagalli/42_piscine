/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 02:22:49 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/01 03:26:16 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_strcpy(char *dst, char *src)
{
	int		i;

	if (!dst && !src)
		return (dst);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strcat(char *dst, char *src)
{
	int	len;

	len = 0;
	while (dst[len])
		len++;
	ft_strcpy(&dst[len], src);
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*ptr;

	if (!size)
	{
		ptr = ((char*)malloc(1));
		ptr[0] = 0;
		return (ptr);
	}
	len = ft_strlen(sep) * (size - 1);
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	if (!(ptr = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr = ft_strcat(ptr, strs[i]);
		ptr = i < (size - 1) ? ft_strcat(ptr, sep) : ptr;
		i++;
	}
	return (ptr);
}
