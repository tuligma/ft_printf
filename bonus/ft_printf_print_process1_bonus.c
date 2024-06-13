/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_process1_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:29:16 by npentini          #+#    #+#             */
/*   Updated: 2024/06/13 04:42:15 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

int	print_string_ext_b(t_flag *flags, char *str, int len, int print_null)
{
	int	count;
	int	null_len;
	int	padding;

	count = 0;
	null_len = 6;
	padding = flags->width - len;
	while (flags->f_minus == 0 && padding-- > 0)
		count += write(1, " ", 1);
	while (print_null == 1 && flags->precision < null_len && len-- > 0)
		count += write(1, " ", 1);
	if (print_null == 1 && flags->precision >= null_len)
		count += write(1, str, null_len);
	if (print_null == 0)
		count += write(1, str, len);
	while (flags->f_minus == 1 && padding-- > 0)
		count += write(1, " ", 1);
	return (count);
}

int	print_string_b(t_flag *flags, char *str, int len, int print_null)
{
	int	count;
	int	null_len;

	count = 0;
	null_len = 6;
	if (flags->width > len)
		count += print_string_ext_b(flags, str, len, print_null);
	else
	{
		if (print_null == 1 && flags->precision < null_len)
			return (count);
		else
			count += write(1, str, len);
	}
	return (count);
}

int	print_pointer_b(t_flag *flags, unsigned long addr, int len)
{
	int	count;
	int	padding;

	count = 0;
	if (flags->width > len)
	{
		padding = flags->width - len;
		while (flags->f_minus == 0 && padding-- > 0)
			count += write(1, " ", 1);
		if (addr == 0)
			count += write(1, "(nil)", 5);
		else
			count += ft_hex_b(addr, 'a', 0, 1);
		while (flags->f_minus == 1 && padding-- > 0)
			count += write(1, " ", 1);
	}
	else
	{
		if (addr == 0)
			count += write(1, "(nil)", 5);
		else
			count += ft_hex_b(addr, 'a', 0, 1);
	}
	return (count);
}

int	print_decimal_b(t_flag *flags, int num, int len, int o_len)
{
	int	count;
	int	padding;

	count = 0;
	padding = 0;
	count += print_decimal_ext1_b(flags, &num, len, &padding);
	count += print_decimal_ext2_b(flags, num, &padding);
	while (flags->f_minus == 0 && padding-- > 0)
	{
		if (flags->f_zero == 1 && flags->precision == -1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
	}
	if (num < 0)
		count += write(1, "-", 1);
	while (flags->precision-- > o_len)
		count += write(1, "0", 1);
	if (o_len > 0)
		count += ft_putnbr_b(num, 0);
	while (flags->f_minus == 1 && padding-- > 0)
		count += write(1, " ", 1);
	return (count);
}
