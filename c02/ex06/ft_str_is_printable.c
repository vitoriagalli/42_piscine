/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 07:01:16 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/16 21:34:23 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_print(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_is_print(*str))
			return (0);
		str++;
	}
	return (1);
}
