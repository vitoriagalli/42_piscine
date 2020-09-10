/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 02:23:29 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/01 04:24:52 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char	**strs;

	strs = NULL;
	strs = (char **)malloc(4 * sizeof(char *));
	strs[0] = "42";
	strs[1] = "Sao Paulo";
	strs[2] = "Piscine";
	strs[3] = "2019";
	printf("%s\n", ft_strjoin(4, strs, "---"));
}
