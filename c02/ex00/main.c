/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 01:28:20 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 02:16:04 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

void	test(const char *test)
{
	char	dest_1[25] = "";
	char	dest_2[25] = "";
	char	*src;

	src = (char *)test;
	printf("dest = %s | src = %s ", dest_1, src);
	printf("| strcpy = %s\n", strcpy(dest_1, src));
	printf("dest = %s | src = %s ", dest_2, src);
	printf("| ft_strcpy = %s\n", ft_strcpy(dest_2, src));
	printf("-------------------------\n");
}


int		main(void)
{
	test("42 Sao Paulo");
	test("test test test test 123");
	test("");
}
