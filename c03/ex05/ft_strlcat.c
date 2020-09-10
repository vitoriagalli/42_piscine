/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 19:32:54 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 21:07:25 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(dest);
	if (len > size)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] && (len + i + 1) > size)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (ft_strlen(src) + len);
}
