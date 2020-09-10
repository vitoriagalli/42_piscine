/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 02:53:25 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 03:00:36 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

void	test(char *str)
{
	printf("%s\nret: %i\n", str, ft_str_is_lowercase(str));
}

int	main(void)
{
	test("");
	test("string");
	test("42saopaulo");
	test("tesTANDO 123 42 SaoPAuLO");
	test("linguagemC");
}
