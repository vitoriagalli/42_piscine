/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 01:16:20 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/05 01:29:36 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int main(void)
{
	t_list *elem;

	elem = ft_create_elem("test");
	printf("%s\n", (char*)elem->data);
	printf("%p\n", elem->next);
	return(0);
}
