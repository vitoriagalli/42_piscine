/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 03:03:27 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 03:14:17 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

void	test(char *str)
{
	printf("%s\nret: %i\n", str, ft_str_is_printable(str));
}

int	main(void)
{
	test("");
	test("STRING");
	test("42\tSAOPAULO");
	test("tesTANDO 123 42 SaoPAuLO");
	test("linguagemC");
}
