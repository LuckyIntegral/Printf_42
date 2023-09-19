/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_vaxx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:06:11 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/14 23:20:53 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_pf_itoa_hex_upper(int nbr)
{
	char	*str;
	char	*res;

	str = ft_pf_itoa_hex(nbr);
	res = str;
	if (str)
	{
		while (*str)
		{
			*str = ft_toupper(*str);
			str++;
		}
	}
	return (res);
}

int	ft_pf_vaxx(t_flags *flags, int nbr)
{
	char	*hex;
	int		counter;
	int		spaces;
	int		offset;

	counter = 0;
	hex = ft_pf_itoa_hex_upper(nbr);
	if (hex)
	{
		offset = ft_pf_xoff(ft_strlen(hex), flags->zero, flags->dot);
		spaces = ft_pf_get_spaces(flags, ft_strlen(hex) + offset);
		if (spaces > 0)
			counter += ft_pf_putnchar(' ', spaces);
		counter += ft_pf_putnchar('0', offset);
		counter += write(1, hex, ft_strlen(hex));
		if (spaces < 0)
			counter += ft_pf_putnchar(' ', ft_abs(spaces));
	}
	free(hex);
	return (counter);
}
