/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_prnt_address.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:57:06 by pecastro          #+#    #+#             */
/*   Updated: 2025/06/05 11:57:26 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_base_prnt_address(uintptr_t nb, int *count_chars, char *base)
{
	if ((size_t)nb >= ft_strlen(base))
	{
		ft_putnbr_base_prnt_address(nb / ft_strlen(base), count_chars, base);
		ft_putnbr_base_prnt_address(nb % ft_strlen(base), count_chars, base);
	}
	if ((size_t)nb < ft_strlen(base))
	{
		if (ft_putchar_prnt((int)base[nb], count_chars) == -1)
			return (-1);
	}
	return (0);
}
