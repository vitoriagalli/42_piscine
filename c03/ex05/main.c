/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 19:28:22 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 21:04:47 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	teste(char *dest, char *src, unsigned int n)
{
	char dst_1[100];
	char dst_2[100];

	strcpy(dst_1, dest);
	strcpy(dst_2, dest);

	printf("%s | %s\n", dest, src);
	printf("ret: %i strlcat:\t%s\n", strlcat(dst_1, src, n), dst_1);
	printf("ret: %i ft_strlcat:\t%s\n", ft_strlcat(dst_2, src, n), dst_2);
	printf("-------------------------\n");
}

int		main(void)
{
	char	*ptr;

	ptr = NULL;
	teste("42", "Sao Paulo", 15);
	teste("", "Sao Paulo", 15);
	teste("42", "", 10);
	teste("Renato ", "Oliveira", 7);
	teste("123\0abc", "piscina outubro", 5);

	/*	the original function segfault when pointer is NULL
		so you must not treat this behaviour */

	// teste("ola", ptr);
}
