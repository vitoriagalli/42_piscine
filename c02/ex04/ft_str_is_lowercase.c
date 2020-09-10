/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:02:34 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/16 10:44:15 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_is_lower(*str))
			return (0);
		str++;
	}
	return (1);
}
