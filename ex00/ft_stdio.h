/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 01:02:04 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 02:57:39 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H
# include <unistd.h>
# include "ft_define.h"

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		ft_isspace(char *str);
int		ft_atoi(char *str);

#endif
