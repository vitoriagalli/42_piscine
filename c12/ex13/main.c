/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:39:27 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/06 21:56:30 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void	print_list(t_list *list);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*create_list(int size, char **strs);

void	ft_print_elem(void *ptr)
{
	printf("%s\n", (char*)ptr);
}

int		main(void)
{
	t_list			*list1;
	t_list			*list2;
	char			*strs1[] = {"piscine42", "linked list", "C language", "linked list", 0};
	char			*strs2[] = {"list_2", "second", 0};

	list1 = create_list(4, strs1);
	list2 = create_list(4, strs2);
	printf("__list 1___\n"); print_list(list1);
	printf("__list 2___\n"); print_list(list2);
	ft_list_merge(&list1, list2);
	printf("__merge___\n"); print_list(list1);
	return(0);
}

/*
** AUXILIXAR FUNCTIONS
*/

void	ft_list_push_front(t_list **begin_list, void *data)
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

t_list	*create_list(int size, char **strs)
{
	t_list	*list;
	int		i;

	if (!(strs) || !(*strs) || size < 1)
		return (NULL);
	i = 0;
	list = ft_create_elem(strs[i++]);
	while (i < size && strs[i])
		ft_list_push_front(&list, (void *)strs[i++]);
	return (list);
}

void	print_list(t_list *list)
{
	int	i;

	i = 0;
	while(list)
	{
		printf("%i: %s\t- %p\n", i, (char*)list->data, list->next);
		list = list->next;
		i++;
	}
	printf("\n");
}
