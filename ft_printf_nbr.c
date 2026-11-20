/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf_nbr.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ourhoutt <ourhoutt@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:48:25 by ourhoutt         #+#    #+#              */
/*   Updated: 2026/11/07 18:26:34 by ourhoutt        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_nbr(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_printf_char('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_printf_nbr(n / 10);
	count += ft_printf_char((n % 10) + '0');
	return (count);
}
