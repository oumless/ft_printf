/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf_unsigned.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ourhoutt <ourhoutt@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:48:38 by ourhoutt         #+#    #+#              */
/*   Updated: 2026/11/06 22:50:45 by ourhoutt        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_printf_unsigned(n / 10);
	count += ft_printf_char((n % 10) + '0');
	return (count);
}
