/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 01:58:02 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/09 00:00:54 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
** infix LEFT ROOT RIGHT
*/

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *,
	void *))
{
	void	*item_ret;

	item_ret = NULL;
	if (root->left)
		item_ret = btree_search_item(root->left, data_ref, cmpf);
	if (item_ret)
		return (item_ret);
	else if (!(cmpf(data_ref, root->item)))
		return (root->item);
	else if (root->right)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
