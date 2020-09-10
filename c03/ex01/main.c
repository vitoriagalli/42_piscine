/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 19:28:22 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 19:54:38 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

void	teste(char *s1, char *s2, unsigned int n)
{
	printf("%s | %s\n", s1, s2);
	printf("strncmp: %i ", strncmp(s1, s2, n));
	printf("ft_strncmp: %i\n", ft_strncmp(s1, s2, n));
	printf("-------------------------\n");
}

int		main(void)
{
	char	*ptr;

	ptr = NULL;
	teste("Ola", "42", 0);
	teste("Hello World", "Hello 42", 5);
	teste("", "Hello 42", 15);
	teste("Hello World", "", 20);
	teste("", "", 20);
	teste("ola\0123", "ola\0abc", 5);

	/*	the original function segfault when pointer is NULL
		so you must not treat this behaviour */

	// teste("ola", ptr);
}
