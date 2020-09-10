/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 23:23:25 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 02:22:33 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_ft_putchar(void)
{
	ft_putstr("_______FT_PUTSTR_______\n\n");
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar(' ');
	ft_putchar(83);
	ft_putchar(80);
	ft_putchar('\n');
}

void	test_ft_putstr(void)
{
	ft_putstr("_______FT_PUTSTR_______\n\n");
	ft_putstr("Hello World\n");
	ft_putstr("A very very very very very very very very long string\n");
	ft_putstr("");
	ft_putstr("\n");
}


void	teste(char *s1, char *s2)
{
	printf("%s | %s\n", s1, s2);
	printf("strcmp: %i ", strcmp(s1, s2));
	printf("ft_strcmp: %i\n\n", ft_strcmp(s1, s2));
}

void	test_ft_strcmp(void)
{
	printf("_______FT_STRCMP_______\n\n");
	teste("Juliana Almeida", "Juliana Almeida");
	teste("Hello World", "Hello 42");
	teste("", "Hello 42");
	teste("Hello World", "");
	teste("", "");
}

void	test_ft_strlen(void)
{
	char	*str;

	printf("_______FT_STRLEN_______\n\n");
	str = "Hello World";
	printf("%s: len = %i\n", str, ft_strlen(str));
	str = "A very very very very very very very very long string";
	printf("%s: len = %i\n", str, ft_strlen(str));
	str = "";
	printf("%s: len = %i\n\n", str, ft_strlen(str));

}
void	test_ft_swap(void)
{
	int	a = 10;
	int	b = 42;

	printf("_______FT_SWAP_______\n\n");
	printf("a = %i b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("a = %i b = %i\n\n", a, b);
}

int		main (void)
{
	test_ft_putchar();
	test_ft_putstr();
	test_ft_strcmp();
	test_ft_strlen();
	test_ft_swap();
}
