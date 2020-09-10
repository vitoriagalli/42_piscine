/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:39:27 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/05 21:56:42 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	print_list(t_list *list);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*create_list(int size, char **strs);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_elem(void *ptr)
{
	printf("%s\n", (char*)ptr);
}

void	test(t_list *list, char *str)
{
	t_list			*elem;

	elem = ft_list_find(list, str, &ft_strcmp);
	if (elem)
		printf("%s\t- %p\n", (char*)elem->data, elem->next);
	else
		printf("error: do not find any data");
}

int		main(void)
{
	t_list			*list;
	char			*strs[] = {"piscine42", "linked list", "C language", "linked list", 0};

	list = create_list(4, strs);
	print_list(list);

	test(list, "linked list");
	test(list, "C language");
	test(list, "dont");
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
