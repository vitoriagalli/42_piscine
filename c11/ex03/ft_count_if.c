/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 15:08:39 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 15:33:11 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	if (!(tab) || !(f))
		return (0);
	while (i < length)
	{
		if (((f)(tab[i])))
			ret++;
		i++;
	}
	return (ret);
}
