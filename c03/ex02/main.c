/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 19:28:22 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 20:18:00 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

void	teste(char *dest, char *src)
{
	char dst_1[100];
	char dst_2[100];

	strcpy(dst_1, dest);
	strcpy(dst_2, dest);

	printf("%s | %s\n", dest, src);
	printf("strcat:\t\t%s\n", strcat(dst_1, src));
	printf("ft_strcat:\t%s\n", ft_strcat(dst_2, src));
	printf("-------------------------\n");
}

int		main(void)
{
	char	*ptr;

	ptr = NULL;
	teste("42", "Sao Paulo");
	teste("", "Sao Paulo");
	teste("42", "");
	teste("Renato ", "Oliveira");
	teste("123\0abc", "piscina outubro");

	/*	the original function segfault when pointer is NULL
		so you must not treat this behaviour */

	// teste("ola", ptr);
}
