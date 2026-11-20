/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ourhoutt <ourhoutt@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:48:50 by ourhoutt         #+#    #+#              */
/*   Updated: 2026/11/07 18:01:04 by ourhoutt        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf_char(int c);
int	ft_printf_hex(unsigned long n, char *hex_base);
int	ft_printf_nbr(long n);
int	ft_printf_ptr(void *ptr);
int	ft_printf_str(char *s);
int	ft_printf_unsigned(unsigned int n);
int	ft_printf(const char *format, ...);

#endif
