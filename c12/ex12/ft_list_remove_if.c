/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:32:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/06 20:07:46 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*list_ptr;
	t_list	*aux;

	if (!begin_list || !(*begin_list) || !data_ref || !(*cmp) || !(*free_fct))
		return ;
	while (*begin_list && !((*cmp)((*begin_list)->data, data_ref)))
	{
		aux = *begin_list;
		*begin_list = (*begin_list)->next;
		(*free_fct)(aux);
	}
	list_ptr = *begin_list;
	while (list_ptr && list_ptr->next)
	{
		if (!((*cmp)(list_ptr->next->data, data_ref)))
		{
			aux = list_ptr->next;
			list_ptr->next = list_ptr->next->next;
			free(aux);
		}
		if (list_ptr->next)
			list_ptr = list_ptr->next;
	}
}
