/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 01:09:52 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 03:58:06 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFINE_H
# define FT_DEFINE_H

# define TRUE 1
# define FALSE 0
# define NO_MATCH -1
# define UNUSED(X) (void)(X)
# define OPS(X) (X == '-' || X == '+' || X == '/' || X == '*' || X == '%')
# define NBR(X) ('0' <= X && X <= '9')

typedef int		(*t_ops)(int, int);

#endif
