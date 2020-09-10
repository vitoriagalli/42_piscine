/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 04:01:54 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/03 20:55:49 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	test(char *nbr, char *base_from, char *base_to)
{
	printf("---------------------------------\n");
	printf("_str_src_: %s\n", nbr);
	printf("_from____: %s\n_to______: %s\n", base_from, base_to);
	printf("_str_dsr_: %s\n", ft_convert_base(nbr, base_from, base_to));
}

int		main(void)
{
	printf("\n~~~~~ expected: OK ~~~~~\n\n");

	test("1001", "01", "0123456789");
	test("ff", "0123456789abcdef", "0123456789");
	test(" +--565698", "0123456789", "0123456789abcdef");
	test("	---ff", "0123456789abcdef", "0123456789");
	test("   -42", "0123456789", "01");
	test("  +-+-11101", "01", "0123456789");
	test(" +105 p", "0123456789", "0123456789abcdef");
	test("  -+115", "01", "0123456789");

	printf("\n~~~~~ expected: ERROR ~~~~~\n\n");

	test("15256", "", "0123456789");				// empty base
	test("15", "0123456789", "5");					// base w/ one char
	test("122", "-123456789", "0123456789");		// base with sign
	test("122", "012+3456789", "");					// base with sign
	test("111", "0 1", "0123456789");				// base with space
	test("568", "012345\t6789", "");				// base with space
	test("111", "01\r", "0123456789");				// base with space
	test("155", "01234506789", "01");				// double char
	test("05", "012345067890", "01");				// double char
	test("abc56", "0123456789", "0123456789");		// dont belong base
	printf("\n");
}

