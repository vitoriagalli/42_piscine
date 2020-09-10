/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:32:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/07 01:31:38 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (!begin_list)
		return ;
	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		node = ft_create_elem(data);
		node->next = *begin_list;
		*begin_list = node;
	}
}

static void	ft_swap(t_list *a, t_list *b)
{
	void	*aux;

	aux = a->data;
	a->data = b->data;
	b->data = aux;
}

void		ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (!begin_list)
		return ;
	ft_list_push_front(begin_list, data);
	ptr1 = *begin_list;
	while (ptr1->next)
	{
		ptr2 = ptr1->next;
		while (ptr2)
		{
			if ((*cmp)(ptr1->data, ptr2->data) > 0)
				ft_swap(ptr1, ptr2);
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}
