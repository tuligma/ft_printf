/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_process2_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:39:26 by npentini          #+#    #+#             */
/*   Updated: 2024/06/13 04:44:53 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_bonus.h"

int	print_decimal_ext2_b(t_flag *flags, int num, int *padding)
{
	int	count;

	count = 0;
	if ((flags->f_space == 1 || flags->f_plus == 1
			|| flags->f_zero == 1) && num > -1)
	{
		if (flags->f_space == 1 && flags->f_plus == 0)
		{
			count += write(1, " ", 1);
			(*padding)--;
		}
		else if (flags->f_space == 0 && flags->f_plus == 1)
			count += write(1, "+", 1);
		if (flags->f_zero == 1 && padding == 0)
		{
			count += write(1, "0", 1);
			(*padding)--;
		}
	}
	return (count);
}

int	print_decimal_ext1_b(t_flag *flags, int *num, int len, int *padding)
{
	int	count;

	count = 0;
	if (flags->width > len)
	{
		*padding = flags->width - len;
		if (*num < 0 && flags->precision == len)
			(*padding)--;
	}
	if (*num < 0 && flags->precision == -1
		&& *padding > 0 && flags->f_zero == 1)
	{
		count += write(1, "-", 1);
		*num *= -1;
	}
	return (count);
}

int	print_unsigned_int_b(t_flag *flags, unsigned int num, int o_len, int len)
{
	unsigned int	padding;
	int				count;

	count = 0;
	padding = 0;
	if (flags->width > len)
		padding = flags->width - len;
	while (flags->f_minus == 0 && padding-- > 0)
	{
		if (flags->f_zero == 1 && flags->precision == -1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
	}
	while (flags->precision-- > o_len)
		count += write(1, "0", 1);
	if (o_len > 0)
		count += ft_putnbr_unsigned_b(num, 0);
	while (flags->f_minus == 1 && padding-- > 0)
		count += write(1, " ", 1);
	return (count);
}

int	print_hexadecimal_ext_b(t_flag *flags, unsigned int num, char lcase,
	unsigned int *padding)
{
	int	count;

	count = 0;
	if (flags->f_hash == 1 && num > 0 && *padding >= 2)
	{
		if (flags->f_zero == 1)
			count += write(1, "0x", 2);
		*padding -= 2;
	}
	while (flags->f_minus == 0 && (*padding)-- > 0)
	{
		if (flags->f_zero == 1 && flags->precision == -1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
	}
	if (flags->f_hash == 1 && num > 0 && flags->f_zero == 0)
	{
		if (lcase == 'a')
			count += write(1, "0x", 2);
		else
			count += write(1, "0X", 2);
	}
	return (count);
}

int	print_hexadecimal_low_up_b(t_flag *flags, unsigned int num,
	char lcase, int o_len)
{
	unsigned int	len;
	unsigned int	padding;
	int				count;

	len = o_len;
	if (flags->precision > (int)len)
		len = flags->precision;
	padding = 0;
	if (flags->width > (int)len)
		padding = flags->width - len;
	count = print_hexadecimal_ext_b(flags, num, lcase, &padding);
	while (flags->precision-- > (int)o_len)
		count += write(1, "0", 1);
	if (o_len > 0)
		count += ft_hex_b(num, lcase, 0, 0);
	while (flags->f_minus == 1 && padding-- > 0)
		count += write(1, " ", 1);
	return (count);
}
