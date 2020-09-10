/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 10:49:04 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 02:36:59 by vscabell         ###   ########.fr       */
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

char	**allocate_dynamic(char **buffer, int size, int m)
{
	char	**new_buffer;
	int		i;

	if (!(new_buffer = malloc((m + 2) * size)))
		return (NULL);
	i = 0;
	while (i < m)
	{
		new_buffer[i] = buffer[i];
		i++;
	}
	if (m > 0)
		free(buffer);
	return (new_buffer);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*substr;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (s[start + i] && len > 0)
	{
		substr[i] = s[start + i];
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	offset;

	i = 0;
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		offset = 0;
		while (str[i + offset] == to_find[offset] && str[i + offset] &&
				to_find[offset])
			offset++;
		if (!(to_find[offset]))
			return (&str[i]);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	**arr;
	char	*aux;

	i = 0;
	len = 0;
	arr = NULL;
	if (!str || !charset)
		return (NULL);
	while (str && (aux = ft_strstr(str, charset)))
	{
		arr = allocate_dynamic(arr, sizeof(char *), i);
		if ((len = aux - str))
			arr[i++] = ft_substr(str, 0, len);
		str = aux + ft_strlen(charset);
	}
	if (*str)
	{
		arr[i] = str;
		i++;
		arr = allocate_dynamic(arr, sizeof(char *), i);
	}
	arr[i] = NULL;
	return (arr);
}
