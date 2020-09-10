/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 01:58:00 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/08 03:33:23 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));

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

	if (!root)
		return ;
	if (!(*root))
		*root = btree_create_node(item);
	else if (cmp(item, (*root)->item) > 0)
	{
		if (!((*root)->right))
			(*root)->right = btree_create_node(item);
		else if ((*root)->right && cmp(item, (*root)->right->item) < 0)
		{
			aux = btree_create_node(item);
			aux->left = (*root);
			aux->right = (*root)->right;
			(*root)->right = NULL;
			*root = aux;
		}
		else
			ft_add_item(&(*root)->right, item, cmp);
	}
	else
	{
		if (!((*root)->left))
			(*root)->left = btree_create_node(item);
		else if ((*root)->left && cmp(item, (*root)->left->item) > 0)
		{
			aux = btree_create_node(item);
			aux->left = (*root)->left;
			aux->right = (*root);
			(*root)->left = NULL;
			*root = aux;
		}
		else
			ft_add_item(&(*root)->left, item, cmp);
	}
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
	btree_apply_suffix(root, &ft_print_item);
}

/*
** this elements: 5 1 3 7 9 4 6 results the following tree
**				4
**		3				6
**	1				5		7
**								9
*/
