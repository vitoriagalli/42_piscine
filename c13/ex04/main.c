/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 01:58:00 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/08 03:33:58 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

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

	btree_insert_data(&root, "5", &ft_strcmp);
	btree_insert_data(&root, "3", &ft_strcmp);
	btree_insert_data(&root, "1", &ft_strcmp);
	btree_insert_data(&root, "0", &ft_strcmp);
	btree_insert_data(&root, "2", &ft_strcmp);
	btree_insert_data(&root, "8", &ft_strcmp);
	btree_insert_data(&root, "1", &ft_strcmp);
	btree_insert_data(&root, "9", &ft_strcmp);
	btree_apply_prefix(root, &ft_print_elem);
}

