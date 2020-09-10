/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 01:58:00 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/08 23:56:49 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	if (!root)
		return ;
	if (!(*root))
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) > 0)
	{
		if (!((*root)->right))
			(*root)->right = btree_create_node(item);
		else
			btree_insert_data(&(*root)->right, item, cmpf);
	}
	else
	{
		if (!((*root)->left))
			(*root)->left = btree_create_node(item);
		else
			btree_insert_data(&(*root)->left, item, cmpf);
	}

}

/*
** prefix ROOT LEFT RIGHT
*/

void	btree_apply_prefix(t_btree *root, void (*applyf)())
{
	if (!root)
		return ;
	applyf(root);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}

void	ft_print_item(void *elem)
{
	if (elem)
		printf("%s\n", (char*)elem);
}

void	ft_print_elem(t_btree *tree)
{
	if (tree)
	{
		printf("%s:  (item) %p    ", (char*)tree->item, (void *)tree);
		if (tree->left)
			printf("(left) %p    ", tree->left);
		else
			printf("(left) 0x000000    ");
		if (tree->right)
			printf("(right) %p\n", tree->right);
		else
			printf("(right) 0x000000\n");
	}
}

int		ft_strcmp(void *v1, void *v2)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)v1;
	s2 = (unsigned char *)v2;
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(void)
{
	t_btree	*root = NULL;
	void	*item;

	btree_insert_data(&root, "5", &ft_strcmp);
	btree_insert_data(&root, "3", &ft_strcmp);
	btree_insert_data(&root, "1", &ft_strcmp);
	btree_insert_data(&root, "0", &ft_strcmp);
	btree_insert_data(&root, "2", &ft_strcmp);
	btree_insert_data(&root, "8", &ft_strcmp);
	btree_insert_data(&root, "1", &ft_strcmp);
	btree_insert_data(&root, "9", &ft_strcmp);
	btree_apply_prefix(root, &ft_print_elem);

	printf("\n__item found__\n");
	item = btree_search_item(root, "9", &ft_strcmp);
	ft_print_item(item);
}
