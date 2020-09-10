/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 17:01:33 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 22:04:49 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

char	ft_is_sign(char *s)
{
	if (!s)
		return (0);
	if ((*s == '+' || *s == '-' || *s == '%' || *s == '/' || *s == '%')
		&& *(s + 1) == '\0')
		return (*s);
	return (0);
}

void	ft_print_result(int op1, int op2, int (*f)(int, int))
{
	int	result;

	result = (f)(op1, op2);
	ft_putnbr(result);
}

int		ft_do_math(char sign, int op1, int op2)
{
	void	*funct;

	if (sign == '+')
		funct = ft_add;
	else if (sign == '-')
		funct = ft_sub;
	else if (sign == '*')
		funct = ft_mult;
	else if (sign == '/')
		funct = ft_div;
	else if (sign == '%')
		funct = ft_mod;
	ft_print_result(op1, op2, funct);
	return (0);
}

int		main(int argc, char **argv)
{
	char	sign;
	int		op1;
	int		op2;

	if (argc < 4 || argc > 4)
		return (0);
	op1 = ft_atoi(argv[1]);
	op2 = ft_atoi(argv[3]);
	if (!(sign = ft_is_sign(argv[2])))
		ft_putnbr(0);
	else if (op2 == 0 && (sign == '/' || sign == '%'))
		ft_putstr("Stop : division by zero");
	else
		return (ft_do_math(sign, op1, op2));
	return (0);
}
