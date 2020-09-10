/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 14:57:31 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 15:15:23 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	test(const char *test, unsigned int size)
{
	// char	dest_1[25] = "";
	char	dest_2[25] = "";
	char	*src;

	src = (char *)test;
	// printf("dest = %s | src = %s \n", dest_1, src);
	// printf("new dest = %s | strlcpy = %i\n", dest_1, strlcpy(dest_1, src, 4));
	printf("dest = %s | src = %s \n", dest_2, src);
	printf("new dest = %s | ft_strlcpy = %u\n", dest_2, ft_strlcpy(dest_2, src, size));
	printf("-------------------------\n");
}

int				main(void)
{
	test("42 Sao Paulo", 0);
	test("42 Sao Paulo", 1);
	test("42 Sao Paulo", 10);
	test("test test test test 123", 50);
}
