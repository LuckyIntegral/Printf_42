/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:02:48 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/14 23:22:34 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_flags_init(t_flags *flags)
{
	flags->dot = 0;
	flags->minus = 0;
	flags->zero = 0;
	flags->numb = 0;
}

int	ft_pf_istype(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_pf_isspec(char c)
{
	if (ft_isdigit(c) || c == '-' || c == '.' || ft_pf_istype(c))
		return (1);
	return (0);
}
