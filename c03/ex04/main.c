/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 19:28:22 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 20:45:39 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	teste(char *dest, char *src)
{
	char dst_1[100];
	char dst_2[100];

	strcpy(dst_1, dest);
	strcpy(dst_2, dest);

	printf("%s | %s\n", dest, src);
	printf("strstr:\t\t%s\n", strstr(dst_1, src));
	printf("ft_strstr:\t%s\n", ft_strstr(dst_2, src));
	printf("-------------------------\n");
}

int		main(void)
{
	char	*ptr;

	ptr = NULL;
	teste("alo123alo", "123");
	teste("42 Sao Paulo", "123");
	teste("", "piscina");
	teste("piscina 42", "");

	/*	the original function segfault when pointer is NULL
		so you must not treat this behaviour */
	// teste(ptr, "teste");
	// teste("ola", ptr);
}
