/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 16:19:34 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/29 19:18:32 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr_base(unsigned long int n, char *base, unsigned int size_base)
{
	if (n / size_base > 0)
		ft_putnbr_base(n / size_base, base, size_base);
	ft_putchar(base[n % size_base]);
}

void	ft_print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char		*str;
	unsigned long int	*ptr;
	int					i;

	if (size == 0)
		return (addr);
	ptr = (unsigned long int *)addr;
	ft_putnbr_base(*ptr, "0123456789abcdef", 16);
	ft_putstr(": ");
	str = (unsigned char *)addr;
	i = -1;
	while (str[++i] && i < (int)size)
	{
		str[i] ? ft_print_hex(str[i]) : ft_putchar(' ');
		(i % 2 != 0) ? ft_putchar(' ') : 0;
	}
	i < (int)size ? ft_print_hex('\0') : 0;
	i += i < (int)size ? 1 : 0;
	while (i++ < 17)
		ft_putchar(' ');
	i = -1;
	while (++i < (int)size)
		(str[i] >= 32 && str[i] <= 126) ? ft_putchar(str[i]) : ft_putchar('.');
	ft_putchar('\n');
	return (addr);
}
