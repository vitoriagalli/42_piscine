/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:32:00 by vscabell          #+#    #+#             */
/*   Updated: 2019/10/23 21:48:48 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_validate(char *buf, char *par, int *dim);
int		**ft_map(char *buf, int *dim_idx, char *par, int **matrix);
int		*ft_calculate(int **matrix, int *dim, int *max);
int		**ft_map_final(char *buf, int *dim_idx, int **matrix, int *max_full);
void	ft_print_matrix_char(int **matrix, int *dim);
int		**ft_malloc(int **matrix, int *dim);
void	ft_clean(char *buf);
int		ft_read(char *buf, char *file, int argc);
void	ft_execute(char *buf, int *dim_idx, char *par);
int		ft_is_number(char c);
int		ft_is_printable(char c);
int		ft_strlen(char *str);
int		ft_idx_aux(char *buf, char *par, int *dim, int count_first_row);
int		ft_idx(char *buf, char *par, int *dim);
int		ft_validate_aux(char *buf, char *par, int *dim, int i);
int		ft_min_value(int val1, int val2, int val3);
void	ft_calculate_aux(int *rc, int **matrix, int *max);
void	ft_map_final_aux(char buf, int **matrix, int *max_full, int *rc);
int		ft_is_number(char c);
int		ft_is_printable(char c);

#endif
