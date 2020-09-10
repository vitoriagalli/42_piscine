/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:39:27 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/05 17:24:07 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_strs(int size, char **strs);

void	test(char **strs, int size)
{
	t_list *list;
	t_list *tmp;

	list = ft_list_push_strs(size, strs);
	tmp = list;
	while(tmp)
	{
		printf("%s\t- %p\n", (char*)tmp->data, tmp->next);
		tmp = tmp->next;
	}
	printf("---------------------\n");
}

int		main(void)
{
	char	*strs1[] = {"piscine42", "42saopaulo", "C language", "linked list", 0};
	char	*strs2[] = {"", 0};
	char	*strs3[] = {0};

	test(strs1, 4);
	test(strs2, 5);
	test(strs3, 3);
	return(0);
}
