/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 03:03:27 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 04:15:10 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char input[60] = "ol\'a tUDo bem? 42paLAVras QuAREntA-e-duas; ciNQUenta+e+uM7";

	printf("%s\n", input);
	printf("%s\n", ft_strcapitalize(input));
}
