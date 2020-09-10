/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:32:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/07 01:28:04 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
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
}
