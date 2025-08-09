/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_prnt.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:22:05 by pecastro          #+#    #+#             */
/*   Updated: 2025/06/05 12:24:06 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_intmin(char *base, int *count_chars)
{
	if (ft_strlen(base) == 16)
	{
		if (ft_putstr_prnt("-80000000", count_chars) == -1)
			return (-1);
	}
	if (ft_strlen(base) == 10)
	{
		if (ft_putstr_prnt("-2147483648", count_chars) == -1)
			return (-1);
	}
	return (0);
}

int	ft_putnbr_base_prnt(int nb, int *count_chars, char *base)
{
	if (nb == -2147483648)
	{
		ft_intmin(base, count_chars);
		return (0);
	}
	if (nb < 0)
	{
		if (ft_putchar_prnt((int) '-', count_chars) == -1)
			return (-1);
		nb = -nb;
	}
	if ((size_t)nb >= ft_strlen(base))
	{
		ft_putnbr_base_prnt(nb / ft_strlen(base), count_chars, base);
		ft_putnbr_base_prnt(nb % ft_strlen(base), count_chars, base);
	}
	if ((size_t)nb < ft_strlen(base))
	{
		if (ft_putchar_prnt((int)base[nb], count_chars) == -1)
			return (-1);
	}
	return (0);
}
