/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:32:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/05 21:06:55 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	if (!begin_list || !(*begin_list))
		return ;
	previous = NULL;
	current = *begin_list;
	while (current->next)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	current->next = previous;
	*begin_list = current;
}
