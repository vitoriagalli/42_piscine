/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:04:37 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/15 19:12:59 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}
