/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 23:56:31 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/30 16:22:16 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char	*ptr;

	ptr = NULL;
	printf("___expected: OK___\n");
	printf("%i\n", ft_atoi_base("1001", "01"));
	printf("%i\n", ft_atoi_base("546", "0123456789"));
	printf("%i\n", ft_atoi_base("ff", "0123456789abcdef"));
	printf("%i\n", ft_atoi_base(" +--56", "0123456789"));
	printf("%i\n", ft_atoi_base("	\n	---ff", "0123456789abcdef"));
	printf("%i\n", ft_atoi_base("\v\v	-42", "0123456789"));
	printf("%i\n", ft_atoi_base("\f	+-+-11101", "01"));
	printf("%i\n", ft_atoi_base(" +105 p", "0123456789"));
	printf("%i\n", ft_atoi_base("  -+115", "01"));

	printf("___expected: ERROR___\n");
	printf("%i\n", ft_atoi_base("15256", ""));				// empty base
	printf("%i\n", ft_atoi_base("15", "5"));				// base w/ one char
	printf("%i\n", ft_atoi_base("122", "-123456789"));		// base with sign
	printf("%i\n", ft_atoi_base("122", "012+3456789"));		// base with sign
	printf("%i\n", ft_atoi_base("111", "0 1"));				// base with space
	printf("%i\n", ft_atoi_base("568", "012345\t6789"));	// base with space
	printf("%i\n", ft_atoi_base("111", "01\r"));			// base with space
	printf("%i\n", ft_atoi_base("155", "01234506789"));		// double char
	printf("%i\n", ft_atoi_base("05", "012345067890"));		// double char
	printf("%i\n", ft_atoi_base("abc56", "0123456789"));	// dont belong base
	printf("%i\n", ft_atoi_base(ptr, "0123456789"));		// null pointer
	printf("%i\n", ft_atoi_base("501", ptr));				// null pointer
}
