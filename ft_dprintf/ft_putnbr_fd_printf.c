/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:31:41 by pecastro          #+#    #+#             */
/*   Updated: 2025/08/09 15:34:23 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_fd_printf(int nb, int fd)
{
	char	c;
	int		count_chars;

	count_chars = 0;
	if (nb == -2147483648)
		return (ft_putstr_fd_printf("-2147483648", fd));
	if (nb < 0)
	{
		count_chars += ft_putchar_fd_printf('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		count_chars += ft_putnbr_fd_printf(nb / 10, fd);
	c = (nb % 10) + '0';
	count_chars += ft_putchar_fd_printf(c, fd);
	return (count_chars);
}
