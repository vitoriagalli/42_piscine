/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:44:48 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/18 21:10:28 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
