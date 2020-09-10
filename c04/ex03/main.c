/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 23:56:31 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/30 15:36:16 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			ft_atoi(char *str);

int		main(void)
{
	// compare the 2 functions

	printf("%i\t%i\n", ft_atoi("56547"), atoi("56547"));
	printf("%i\t%i\n", ft_atoi("    -123"), atoi("    -123"));
	printf("%i\t%i\n", ft_atoi("  \t -56teste56"), atoi("  \t -56teste56"));
	printf("%i\t%i\n", ft_atoi("\t\t+teste"), atoi("\t\t+teste"));
	printf("%i\t%i\n", ft_atoi("+101010teste"), atoi("+101010teste"));
	printf("%i\t%i\n", ft_atoi("   a123"), atoi("   a123"));
	printf("%i\t%i\n", ft_atoi("0"), atoi("0"));

	// except the sign part

	printf("%i\n", ft_atoi("\n\n+++---42"));
	printf("%i\n", ft_atoi("  +98 -"));
	printf("%i\n", ft_atoi("  ++455 -"));
	printf("%i\n", ft_atoi("    +-+123"));
	printf("%i\n", ft_atoi("    +-+a123"));
}
