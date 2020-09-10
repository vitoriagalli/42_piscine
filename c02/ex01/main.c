/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 01:28:20 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 02:35:45 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	test(const char *test)
{
	char	dest_1[25] = "";
	char	dest_2[25] = "";
	char	*src;

	src = (char *)test;
	printf("dest = %s | src = %s ", dest_1, src);
	printf("| strncpy = %s\n", strncpy(dest_1, src, 20));
	printf("dest = %s | src = %s ", dest_2, src);
	printf("| ft_strncpy = %s\n", ft_strncpy(dest_2, src, 20));
	printf("-------------------------\n");
}

int		main(void)
{
	test("42 Sao Paulo");
	test("test test test test 123");
	test("Luana Davison de Sousa Logrado");
}
