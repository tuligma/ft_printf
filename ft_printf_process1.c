/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_process1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:52:38 by npentini          #+#    #+#             */
/*   Updated: 2024/06/02 04:40:27 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_char(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	return (write(1, &c, 1));
}

int	process_string(va_list ap)
{
	char	*str;
	int		x;
	int		count;

	str = va_arg(ap, char *);
	if (str == NULL)
		return (write(1, "(null)", 6));
	x = -1;
	count = 0;
	while (str[++x] != '\0')
		count += write(1, &str[x], 1);
	return (count);
}

int	process_pointer(va_list ap)
{
	unsigned long	addr;
	int				count;

	addr = (unsigned long) va_arg(ap, void *);
	if (addr == 0)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_hex(addr, 'a');
	return (count);
}

int	process_decimal(va_list ap)
{
	int	num;

	num = va_arg(ap, int);
	return (ft_putnbr(num));
}
