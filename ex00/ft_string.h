/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 01:17:45 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 19:51:57 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include <stdlib.h>
# include "ft_define.h"
# include "ft_op.h"

int		ft_strlen(char *str);
char	*ft_strpad(char *str);
void	ft_strclear_number(char *str);
void	ft_strnbr(char *str, int nbr);
t_ops	ft_ctot(char c);

#endif
