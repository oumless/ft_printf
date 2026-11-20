/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf_ptr.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ourhoutt <ourhoutt@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:48:31 by ourhoutt         #+#    #+#              */
/*   Updated: 2026/11/07 18:13:01 by ourhoutt        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr)
{
	unsigned long	addr;
	int				count;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += ft_printf_str("0x");
	addr = (unsigned long) ptr;
	count += ft_printf_hex(addr, "0123456789abcdef");
	return (count);
}
