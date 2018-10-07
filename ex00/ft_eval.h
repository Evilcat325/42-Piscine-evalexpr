/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 02:51:24 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 03:54:27 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_H
# define FT_EVAL_H
# include <stdlib.h>
# include "ft_define.h"
# include "ft_string.h"
# include "ft_stdio.h"
# include "ft_check.h"

int		eval_expr(char *str);
int		ft_str_last_left(char *str);
void	ft_eval_simple(char *str);
void	ft_eval_op(char *str, t_ops operation);
void	ft_eval_replace(char *str);

#endif
