/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 23:14:57 by npentini          #+#    #+#             */
/*   Updated: 2024/05/30 01:25:19 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_memory(unsigned long int x)
{
	char	hex[16];
	int		i;
	int		y;
	int		count;

	i = -1;
	while (++i < 16)
		hex[i] = '0';
	i = 16;
	while (--i > 0)
	{
		y = x % 16;
		if (y < 10)
			hex[i - 1] = '0' + y;
		else
			hex[i - 1] = 'a' + (y - 10);
		x /= 16;
	}
	x = 0;
	while (hex[x] != '\0' && hex[x] == '0')
		x++;
	count = write(1, hex + x, 15 - x);
	return (count);
}

int	process_c(va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	return (write(1, &c, 1));
}

int	process_s(va_list ap)
{
	char	*str;
	int		x;
	int		count;
	
	str = va_arg(ap, char *);
	x = -1;
	count = 0;
	while (str[++x] != '\0')
		count += write(1, &str[x], 1);
	return (count);
}

int	process_p(va_list ap)
{
	unsigned long int addr;
	int	count;
	
	addr = (unsigned long int) va_arg(ap, void *);
	count = write(1, "0x", 2);
	count += hex_memory(addr);
	return (count);
}

int	process_d(va_list ap)
{
	int num;
	int	count;

	num = va_arg(ap, int);
	count += 
	return (write(1, c, 1));
}

// int	process_i(va_list ap)
// {
// 	return (write(1, c, 1));
// }

// int	process_u(va_list ap)
// {
// 	return (write(1, c, 1));
// }

// int	process_x(va_list ap)
// {
// 	return (write(1, c, 1));
// }

// int	process_X(va_list ap)
// {
// 	return (write(1, c, 1));
// }

// int	process_P(va_list ap)
// {
// 	return (write(1, c, 1));
// }



int format_processor(va_list ap, char spec)
{
	int		(*process[9])(va_list ap);
	char 	*str;
	int		x;
	int		count;

	process[0] = process_c;
	process[1] = process_s;
	process[2] = process_p;
	// process[3] = process_d;
	// process[4] = process_i;
	// process[5] = process_u;
	// process[6] = process_x;
	// process[7] = process_X;
	// process[8] = process_P;
	str = "cspdiuxX%";
	count = 0;
	x = 0;
	while (str[x] != '\0' && str[x] != spec)
		x++;
	if (str[x] == spec)
		count += process[x](ap);
	else
		count += write(1, &spec, 1);
	return (count);
} 

int	ft_printf(const char *args, ...)
{
	va_list ap;
	int		x;
	int		i;

	va_start(ap, args);
	x = 0;
	i = -1;
	while (args[++i] != '\0')
	{
		if (args[i] == '%')
			x += format_processor(ap, args[++i]);
		else
			x += write(1, &args[i], 1);
	}
	va_end(ap);
	return (x);
}