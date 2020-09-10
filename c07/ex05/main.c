/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 04:05:26 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/03 19:57:58 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

void	test(char *str, char *charset)
{
	char	**p;

	p = ft_split(str, charset);
	printf("~~~~~~~~~~~~~~~~~~~~\n");
	printf("%s\n\n", str);
	while (*p)
		printf("%s\n", *p++);
	printf("\n");
}

int		main(void)
{
	test("vitoria--scabello--galli", "--");
	test("--a", "--");
	test("test123hello1234", "123");
	test("olaoptudoopbom", "op");

	// test("ola\0tudo\0bom", "\0"); // do not accept '\0' as charset
}
