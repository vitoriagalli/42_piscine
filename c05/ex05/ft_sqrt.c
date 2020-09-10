/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 01:23:43 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 21:25:09 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** set the max value 46.340 because the max int is 2.147.483.647
*/

int	ft_sqrt(int nb)
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
	return (0);
}
