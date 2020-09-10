/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 10:05:20 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/20 22:04:35 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	check_line(char c, int is_valid, t_list *list)
{
	if (is_valid == 0)
		push_back(list, c);
}

void	ck_w(t_read_vars *vars, t_list **word, t_list **list, t_list ***super)
{
	int *arr;

	if (vars->is_valid)
	{
		arr = validate_list(*list);
		if (vars->c != ' ' && vars->w_trimmed == 0)
			vars->w_trimmed = 1;
		if (vars->w_trimmed && vars->c != '\n')
			push_back(*word, vars->c);
		if (vars->c == '\n')
			super[arr[0]][arr[1]] = *word;
	}
	if (vars->c == ':' && (arr = validate_list(*list))[0] != -1)
		vars->is_valid = 1;
	check_line(vars->c, vars->is_valid, *list);
	if (vars->c == '\n')
	{
		vars->w_trimmed = 0;
		vars->is_valid = 0;
		*list = create_elem('_');
		*word = create_elem('_');
	}
}

t_list	***read_file(t_list ***super_list)
{
	t_read_vars vars;
	t_list		*list;
	t_list		*word;
	char		buf[BUFF_SIZE];

	vars.is_valid = 0;
	vars.w_trimmed = 0;
	super_list = initialize(super_list);
	list = create_elem('_');
	word = create_elem('_');
	vars.fd = open("numbers.dict", O_RDONLY);
	if (vars.fd == -1)
		return (0);
	while ((vars.ret = read(vars.fd, buf, BUFF_SIZE)))
	{
		vars.i = -1;
		while (++(vars.i) < vars.ret)
		{
			vars.c = buf[vars.i];
			ck_w(&vars, &word, &list, super_list);
		}
	}
	if (close(vars.fd) == -1)
		return (0);
	return (super_list);
}
