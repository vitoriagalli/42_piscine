/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 00:53:04 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/30 16:41:36 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' ||
			c == ' ')
		return (1);
	return (0);
}

int			ft_isbase(int c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int			ft_dup_char(char *base, int size_base)
{
	int i;
	int j;

	i = 0;
	while (i < size_base)
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			ft_check_base(char *base)
{
	int		size_base;

	size_base = 0;
	while (base[size_base])
		size_base++;
	if (ft_dup_char(base, size_base))
		return (-1);
	while (*base)
	{
		if (ft_isspace(*base) || *base == '+' || *base == '-')
			return (-1);
		base++;
	}
	return (size_base);
}

int			ft_atoi_base(char *str, char *base)
{
	long	n;
	int		i;
	int		sign;
	int		size_base;
	int		posit;

	i = 0;
	sign = 1;
	if (!base || !str)
		return (0);
	if ((size_base = ft_check_base(base)) < 2)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1 * sign;
		i++;
	}
	if ((n = ft_isbase(str[i], base)) < 0)
		return (0);
	while ((posit = ft_isbase(str[++i], base)) >= 0)
		n = n * size_base + posit;
	return (n * sign);
}
