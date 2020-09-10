/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 19:28:22 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 20:35:48 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

void	teste(char *dest, char *src, unsigned int n)
{
	char dst_1[100];
	char dst_2[100];

	strcpy(dst_1, dest);
	strcpy(dst_2, dest);

	printf("%s | %s\n", dest, src);
	printf("strncat:\t%s\n", strncat(dst_1, src, n));
	printf("ft_strncat:\t%s\n", ft_strncat(dst_2, src, n));
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
