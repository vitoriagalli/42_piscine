/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 19:28:22 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 19:52:34 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

void	teste(char *s1, char *s2)
{
	printf("%s | %s\n", s1, s2);
	printf("strcmp: %i ", strcmp(s1, s2));
	printf("ft_strcmp: %i\n", ft_strcmp(s1, s2));
	printf("-------------------------\n");
}

int		main(void)
{
	char	*ptr;

	ptr = NULL;
	teste("Juliana Almeida", "Juliana Almeida");
	teste("Hello World", "Hello 42");
	teste("", "Hello 42");
	teste("Hello World", "");
	teste("", "");
	teste("ola\0vvv", "ola\0abc");

	/*	the original function segfault when pointer is NULL
		so you must not treat this behaviour */

	// teste("ola", ptr);
}
