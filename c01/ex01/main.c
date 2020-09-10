/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 22:27:33 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/28 22:51:38 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int	*ptr1 = NULL;
	int	**ptr2 = NULL;
	int	***ptr3 = NULL;
	int	****ptr4 = NULL;
	int	*****ptr5 = NULL;
	int	******ptr6 = NULL;
	int	*******ptr7 = NULL;
	int	********ptr8 = NULL;
	int	*********ptr9 = NULL;
	int	i = 0;

	ptr1 = &i;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	printf("%i", i);
}
