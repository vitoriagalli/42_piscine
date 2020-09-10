/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 09:44:02 by dicisner          #+#    #+#             */
/*   Updated: 2019/10/20 21:21:59 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

t_list	*create_elem(char c)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	list->data = c;
	list->next = 0;
	return (list);
}

t_list	*push_back(t_list *list, char c)
{
	t_list *new;
	t_list *tmp;

	new = create_elem(c);
	tmp = list;
	while (tmp)
	{
		if (tmp->next == 0)
		{
			tmp->next = new;
			return (list);
		}
		tmp = tmp->next;
	}
	return (list);
}

void	print_list(t_list *list)
{
	t_list *tmp;

	tmp = list->next;
	while (tmp)
	{
		ft_putchar(tmp->data);
		tmp = tmp->next;
	}
}
