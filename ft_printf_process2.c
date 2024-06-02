/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_process2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:54:51 by npentini          #+#    #+#             */
/*   Updated: 2024/06/02 04:40:48 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_integer(va_list ap)
{
	return (process_decimal(ap));
}

int	process_unsigned_int(va_list ap)
{
	int	num;

	num = va_arg(ap, int);
	return (ft_putnbr_unsigned(num));
}

int	process_hexadecimal_low(va_list ap)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	return (ft_hex(num, 'a'));
}

int	process_hexadecimal_up(va_list ap)
{
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	return (ft_hex(num, 'A'));
}

int	process_percent(va_list ap)
{
	(void)ap;
	return (write(1, "%", 1));
}
