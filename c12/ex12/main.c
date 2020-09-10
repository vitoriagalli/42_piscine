/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:39:27 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/06 20:22:57 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *));
void	print_list(t_list *list);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*create_list(int size, char **strs);

/*
** in this case, the data is on the stack
** so there is nothing to be freed
*/

void	ft_free(void *data)
{
	// free(data);
	data = NULL;
}

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

int		main(void)
{
	t_list			*list;
	char			*strs[] = {"piscine42", "linked list", "C language", "linked list", 0};

	list = create_list(4, strs);
	print_list(list);
	ft_list_remove_if(&list, "linked list", &ft_strcmp, &ft_free);
	print_list(list);
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
