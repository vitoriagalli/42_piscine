/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 20:19:43 by vscabell          #+#    #+#             */
/*   Updated: 2020/08/30 20:33:41 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(42);
	ft_is_negative(2147483647);
	ft_is_negative(-42);
	ft_is_negative(-2147483648);
}
