/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 02:38:23 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 02:57:59 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

void	test(char *str)
{
	printf("%s\nret: %i\n", str, ft_str_is_alpha(str));
}

int	main(void)
{
	test("");
	test("string");
	test("aloAloblaBla");
	test("tesTANDO 123 42 SaoPAuLO");
	test("123 Alo +-*");
}
