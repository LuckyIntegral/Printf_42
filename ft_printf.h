/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfrants <vfrants@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:16:20 by vfrants           #+#    #+#             */
/*   Updated: 2023/09/19 19:35:08 by vfrants          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

# ifndef OUTPUT
#  define OUTPUT 1
# endif

# define HEX "0123456789abcdef"

typedef struct s_flags // for each field: 0 if nothing, else !0
{
	int	minus;
	int	zero;
	int	dot;
	int	numb;
}		t_flags;

// printf

int		ft_printf(const char *fmt, ...);

// type conversions

int		ft_pf_vap(t_flags *flags, void *n);
int		ft_pf_vau(t_flags *flags, unsigned int nbr);
int		ft_pf_vas(t_flags *flags, const char *str);
int		ft_pf_vac(t_flags *flags, const char c);
int		ft_pf_vaid(t_flags *flags, int nbr);
int		ft_pf_vaxx(t_flags *flags, int nbr);
int		ft_pf_vax(t_flags *flags, int nbr);

// function duplicates

size_t	ft_pf_nbrlen_hex(int n);
size_t	ft_pf_nbrlen(int n);
void	ft_pf_flags_init(t_flags *flags);
char	*ft_pf_itoa_hex(int n);
int		ft_pf_get_spaces(t_flags *flags, size_t strlen);
int		ft_pf_xoff(int strlen, int zero, int dot);
int		ft_pf_putnstr(const char *str, int n);
int		ft_pf_putnchar(char c, int n);
int		ft_pf_istype(char c);
int		ft_pf_isspec(char c);

#endif
