/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:43:35 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/28 23:49:40 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char	*str;

	str = "Hello World";
	printf("%s: len = %i\n", str, ft_strlen(str));
	str = "A very very very very very very very very long string";
	printf("%s: len = %i\n", str, ft_strlen(str));
	str = "";
	printf("%s: len = %i\n", str, ft_strlen(str));
}
