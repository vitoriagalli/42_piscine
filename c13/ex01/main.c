/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 01:58:00 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/08 00:17:06 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_elem(t_btree *tree)
{
	if (tree)
		printf("%s\t- (left)%p (right)%p\n", (char*)tree->item, tree->left, tree->right);
}

void	ft_print_item(void *elem)
{
	if (elem)
		printf("%s\n", (char*)elem);
}

/*
** cp > 0 : item is smaller
** cp < 0 : item is greater
*/

void	ft_add_item(t_btree **root, void *item, int (*cmp)())
{
	t_btree		*aux;
	int			cp;

	if (!root)
		return ;
	cp = (*root) ? (*cmp)((*root)->item, item) : 0;
	if (!(*root))
		*root = btree_create_node(item);
	else if ((cp < 0) && !((*root)->right))
		(*root)->right = btree_create_node(item);
	else if ((cp > 0) && !((*root)->left))
		(*root)->left = btree_create_node(item);
	else if (cp < 0 && (*root)->right && (*cmp)((*root)->right->item, item) > 0)
	{
		aux = btree_create_node(item);
		aux->left = (*root);
		aux->right = (*root)->right;
		(*root)->right = NULL;
		*root = aux;
	}
	else if (cp > 0 && (*root)->left && (*cmp)((*root)->left->item, item) < 0)
	{
		aux = btree_create_node(item);
		aux->left = (*root)->left;
		aux->right = (*root);
		(*root)->left = NULL;
		*root = aux;
	}
	else if (cp > 0)
		ft_add_item(&(*root)->left, item, cmp);
	else
		ft_add_item(&(*root)->right, item, cmp);
}

int		main(void)
{
	t_btree	*root = NULL;

	ft_add_item(&root, "5", &ft_strcmp);
	ft_add_item(&root, "1", &ft_strcmp);
	ft_add_item(&root, "3", &ft_strcmp);
	ft_add_item(&root, "7", &ft_strcmp);
	ft_add_item(&root, "9", &ft_strcmp);
	ft_add_item(&root, "4", &ft_strcmp);
	ft_add_item(&root, "6", &ft_strcmp);
	btree_apply_prefix(root, &ft_print_item);
}

/*
** this elements: 5 1 3 7 9 4 6 results the following tree
**				4
**		3				6
**	1				5		7
**								9
*/
