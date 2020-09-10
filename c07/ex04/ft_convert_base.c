/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 04:01:59 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/03 20:54:18 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base);

int		ft_nbrlen(int nbr, int size_base)
{
	int			len;
	long		n;

	n = nbr;
	len = 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n / size_base > 0)
	{
		n = n / size_base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int n, char *base, int size_base)
{
	long	nbr;
	char	*itoa;
	int		len;
	int		i;

	len = ft_nbrlen(n, size_base);
	nbr = n;
	if (!(itoa = malloc((len + 1) * sizeof(char))))
		return (NULL);
	itoa[len] = '\0';
	i = 0;
	if (nbr < 0)
	{
		itoa[i] = '-';
		nbr = nbr * -1;
		i++;
	}
	while (nbr / size_base > 0 && len > i)
	{
		itoa[len - 1] = base[nbr % size_base];
		nbr = nbr / size_base;
		len--;
	}
	itoa[i] = base[nbr % size_base];
	return (itoa);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		size_base_to;
	char	*n_convert;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	if ((size_base_to = ft_check_base(base_to)) < 2)
		return (NULL);
	if (!(n = ft_atoi_base(nbr, base_from)))
		return (NULL);
	n_convert = ft_itoa_base(n, base_to, size_base_to);
	return (n_convert);
}
