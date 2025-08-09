/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_prnt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:55:49 by pecastro          #+#    #+#             */
/*   Updated: 2025/06/05 11:38:18 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr_prnt(void *str, int *count_chars)
{
	unsigned char	*s;
	int				i;

	if (count_chars == NULL)
		return (-1);
	if (str == NULL)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		(*count_chars) += 6;
		return (0);
	}
	s = (unsigned char *)str;
	i = 0;
	while (s[i])
	{
		if (ft_putchar_prnt((int)s[i], count_chars) == -1)
			return (-1);
		i ++;
	}
	return (0);
}
