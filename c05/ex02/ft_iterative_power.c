/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 00:07:23 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/31 00:16:44 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	pot;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pot = nb;
	while (power > 1)
	{
		pot *= nb;
		power--;
	}
	return (pot);
}
