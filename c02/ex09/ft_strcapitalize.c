/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 08:03:27 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/16 19:38:11 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_scapitalize(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (!(ft_is_lower(s[i]) || ft_is_upper(s[i]) || ft_is_num(s[i])))
			i++;
		if (ft_is_lower(s[i]))
			s[i] = s[i] - ('a' - 'A');
		i++;
		while (ft_is_lower(s[i]) || ft_is_upper(s[i]) || ft_is_num(s[i]))
		{
			if (ft_is_upper(s[i]))
				s[i] = s[i] + ('a' - 'A');
			i++;
		}
		i++;
	}
	return (s);
}
