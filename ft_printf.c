/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ourhoutt <ourhoutt@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:48:45 by ourhoutt         #+#    #+#              */
/*   Updated: 2026/11/09 16:02:09 by ourhoutt        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_printf_str(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_printf_ptr(va_arg(args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_printf_nbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_printf_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_printf_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (specifier == 'X')
		return (ft_printf_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (specifier == '%')
		return (ft_printf_char('%'));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += ft_check_specifier(*format, args);
		}
		else if (*format == '%' && !*(format + 1))
			return (-1);
		else
			count += ft_printf_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
