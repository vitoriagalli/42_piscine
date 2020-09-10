/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:32:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/07 01:27:51 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(t_list *a, t_list *b)
{
	void	*aux;

	aux = a->data;
	a->data = b->data;
	b->data = aux;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (!begin_list)
		return ;
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
	int (*cmp)())
{
	t_list	*list_ptr;

	if (!begin_list1)
		return ;
	if (*begin_list1)
	{
		list_ptr = *begin_list1;
		while (list_ptr->next)
			list_ptr = list_ptr->next;
		if (begin_list2)
			list_ptr->next = begin_list2;
	}
	else if (begin_list2)
		*begin_list1 = begin_list2;
	ft_list_sort(begin_list1, cmp);
}
