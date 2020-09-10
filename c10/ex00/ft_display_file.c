/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <vscabell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 02:48:23 by vscabell          #+#    #+#             */
/*   Updated: 2020/09/04 03:20:04 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *s)
{
	int i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	char	c;
	int		fd;

	if (argc == 1)
		ft_putstr("File name missing.");
	else if (argc > 2)
		ft_putstr("Too many arguments.");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (!fd)
			ft_putstr("Cannot read file.");
		else
		{
			while (read(fd, &c, 1))
				write(1, &c, 1);
		}
	}
	return (0);
}
