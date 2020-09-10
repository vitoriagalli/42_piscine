/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validates.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:42:35 by juolivei          #+#    #+#             */
/*   Updated: 2019/10/20 20:59:52 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_validate_digits(int n, int *arr, int zeros)
{
	if (n < 10 && zeros == 0)
	{
		arr[0] = SINGLE_D;
		arr[1] = n;
	}
	else if (n >= 10 && n < 20 && zeros == 0)
	{
		arr[0] = TWO_D;
		arr[1] = n % 10;
	}
	else if (n > 19 && n < 100 && n % 10 == 0 && zeros == 0)
	{
		arr[0] = TEN_MUL;
		arr[1] = (n / 10) - 2;
	}
	else if (n == 100 && zeros == 0)
	{
		arr[0] = HUNDRED;
		arr[1] = 0;
	}
	else if (n == 100 && (zeros - 1) % 3 == 0)
	{
		arr[0] = TEN_POW;
		arr[1] = (zeros - 1) / 3;
	}
}
