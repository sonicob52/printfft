/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:26:42 by frgarci2          #+#    #+#             */
/*   Updated: 2023/11/24 13:32:27 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_va_arg_type(char const s, va_list t)
{
	int	count;

	count = 0;
	if (s == 'c')
		count = count + ft_printc((char)va_arg(t, int));
	if (s == 's')
		count = count + ft_prints(va_arg(t, char *));
	if (s == 'p')
	{
		count = count + ft_prints("0x");
		if (count < 0)
			return (-1);
		count = count + ft_printp(va_arg(t, unsigned long), "0123456789abcdef");
	}
	if (s == 'd' || s == 'i')
		count = count + ft_printn(va_arg(t, long int));
	if (s == 'u')
		count = count + ft_printu(va_arg(t, unsigned int));
	if (s == 'x')
		count = count + ft_printh(va_arg(t, int), "0123456789abcdef");
	if (s == 'X')
		count = count + ft_printh(va_arg(t, int), "0123456789ABCDEF");
	if (s == '%')
		count = count + ft_printc(37);
	return (count);
}

int	ft_printf(char const *s, ...)
{
	va_list	t;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(t, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = count + ft_va_arg_type(s[i], t);
		}
		else
		{
			count = count + ft_printc(s[i]);
		}
		if (count < 0)
			return (-1);
		i++;
	}
	va_end(t);
	return (count);
}
