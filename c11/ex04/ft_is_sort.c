/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 15:33:46 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 15:50:14 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (!(tab) || !(f))
		return (0);
	while (i < (length - 1))
	{
		if (((f)(tab[i], tab[i + 1])) > 0)
			return (0);
		i++;
	}
	return (1);
}
