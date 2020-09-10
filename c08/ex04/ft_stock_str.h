/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:38:36 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/03 22:43:42 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <stdlib.h>

typedef struct		s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}					t_stock_str;

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif
