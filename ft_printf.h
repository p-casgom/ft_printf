/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecastro <pecastro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:53:01 by pecastro          #+#    #+#             */
/*   Updated: 2025/08/09 14:36:36 by pecastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar_fd_printf(char c, int fd);
int	ft_putstr_fd_printf(char *s, int fd);
int	ft_putnbr_fd_printf(int nb, int fd);
int	ft_putnbr_base_unsigned_fd(unsigned long long nb, char converter, int fd);

#endif
