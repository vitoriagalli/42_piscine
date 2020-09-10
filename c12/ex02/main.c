/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:39:27 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/05 16:50:13 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		ft_list_size(t_list *begin_list);

int		main(void)
{
	t_list *list;
	t_list *elem;
	t_list *tmp;

	list = NULL;
	elem = ft_create_elem("elem_zero");
	list = elem;
	elem = ft_create_elem("elem_one");
	list->next = elem;
	elem = ft_create_elem("elem_two");
	list->next->next = elem;

	tmp = list;
	while(tmp)
	{
		printf("%s\t- %p\n", (char*)tmp->data, tmp->next);
		tmp = tmp->next;
	}
	printf("\nsize: %i", ft_list_size(list));
	return(0);
}
