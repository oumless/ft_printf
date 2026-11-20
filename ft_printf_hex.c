/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf_hex.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ourhoutt <ourhoutt@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:48:15 by ourhoutt         #+#    #+#              */
/*   Updated: 2026/11/07 18:08:17 by ourhoutt        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long n, char *hex_base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_printf_hex(n / 16, hex_base);
	count += ft_printf_char(hex_base[n % 16]);
	return (count);
}
