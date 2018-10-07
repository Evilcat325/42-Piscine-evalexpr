/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 01:22:58 by seli              #+#    #+#             */
/*   Updated: 2018/10/07 03:00:29 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strpad(char *str)
{
	int		i;
	char	*pad;

	i = 0;
	pad = malloc(sizeof(char) * (ft_strlen(str) + 2));
	pad[i] = ' ';
	while (str[i])
	{
		pad[i + 1] = str[i];
		i++;
	}
	pad[i] = '\0';
	return (pad);
}

void	ft_strclear(char *str)
{
	*str = ' ';
	while (!OPS(*str))
		*(str++) = ' ';
	*str = ' ';
	while (*str == ' ')
		str++;
	*str = ' ';
	while (*str && !OPS(*str))
		*(str++) = ' ';
}

void	ft_strnbr(char *str, int nbr)
{
	long	divisor;
	long	nb;

	nb = (long)nbr;
	if (nb < 0)
		*(str++) = '-';
	divisor = 1000000000000000000;
	while (nb / divisor == 0 && divisor != 1)
		divisor /= 10;
	while (divisor != 1)
	{
		*(str++) = ABS((nb / divisor) % 10) + '0';
		divisor /= 10;
	}
	*(str++) = ABS(nb % 10) + '0';
}

t_ops	ft_ctot(char c)
{
	if (c == '-')
		return (&ft_sub);
	else if (c == '+')
		return (&ft_add);
	else if (c == '*')
		return (&ft_mul);
	else if (c == '/')
		return (&ft_div);
	else if (c == '%')
		return (&ft_mod);
	return (0);
}
