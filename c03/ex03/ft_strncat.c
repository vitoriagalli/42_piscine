/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:10:20 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/21 09:17:01 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	i < nb ? dest[len + i] = '\0' : 0;
	return (dest);
}
