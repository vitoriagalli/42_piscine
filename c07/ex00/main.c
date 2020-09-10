/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 00:30:57 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/01 04:26:44 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

void	test(char *str)
{
	printf("string: %s\n", str);
	printf("st dup: %s\n", ft_strdup(str));
}

int		main(void)
{
	test("testando ft_strdup");
	test("a very very very very very long string");
	test("");
}
