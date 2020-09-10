/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 22:29:24 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 22:44:35 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		raiz;
	int		max_lim;
	int		min_lim;

	if (nb < 0 || nb == 0)
		return (0);
	min_lim = 0;
	max_lim = nb > 46340 ? 46340 : nb;
	raiz = max_lim;
	while (max_lim > (min_lim + 1))
	{
		if (raiz * raiz == nb)
			return (raiz);
		raiz = ((max_lim + min_lim) % 2) == 0 ?
			(max_lim + min_lim) / 2 : (max_lim + min_lim) / 2 + 1;
		if ((raiz * raiz) > nb)
			max_lim = raiz;
		else if ((raiz * raiz) < nb)
			min_lim = raiz;
	}
	return (raiz);
}

int		ft_is_prime(int nb)
{
	int		i;
	int		max_check;
	long	n;

	n = nb < 0 ? -1 * nb : nb;
	if (n == 2)
		return (1);
	if (n == 0 || n == 1 || !(n % 2))
		return (0);
	i = 3;
	max_check = ft_sqrt(n);
	while (i <= max_check)
	{
		if ((n % i == 0) && (i != n))
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
