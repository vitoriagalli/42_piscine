/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 02:53:25 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 02:58:26 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

void	test(char *str)
{
	printf("%s\nret: %i\n", str, ft_str_is_numeric(str));
}

int	main(void)
{
	test("");
	test("01");
	test("12356");
	test("tesTANDO 123 42 SaoPAuLO");
	test("123 Alo +-*");
}
