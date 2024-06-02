/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:15:13 by npentini          #+#    #+#             */
/*   Updated: 2024/06/02 04:40:32 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *args, ...);
int	ft_putnbr(int num);
int	ft_putnbr_unsigned(unsigned int num);
int	ft_hex(unsigned long num, char lcase);
int	process_char(va_list ap);
int	process_string(va_list ap);
int	process_pointer(va_list ap);
int	process_decimal(va_list ap);
int	process_integer(va_list ap);
int	process_unsigned_int(va_list ap);
int	process_hexadecimal_low(va_list ap);
int	process_hexadecimal_up(va_list ap);
int	process_percent(va_list ap);

#endif