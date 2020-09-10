/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:32:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/07 00:40:36 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	size;

	if (!begin_list)
		return (0);
	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

void	ft_swap(t_list *a, t_list *b)
{
	void	*aux;

	aux = a->data;
	a->data = b->data;
	b->data = aux;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*ptr1;
	t_list	*ptr2;
	int		size;
	int		i;
	int		j;

	if (!begin_list)
		return ;
	i = 1;
	ptr1 = begin_list;
	size = ft_list_size(begin_list);
	while (i < (size / 2))
	{
		ptr2 = begin_list;
		j = size - i;
		while (j-- > 0)
			ptr2 = ptr2->next;
		ft_swap(ptr1, ptr2);
		i++;
		ptr1 = ptr1->next;
	}
}
