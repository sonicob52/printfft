/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printh.c	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:00:22 by frgarci2          #+#    #+#             */
/*   Updated: 2023/11/24 13:30:35 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printc(char c);

int	ft_printh(unsigned int n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count = count + ft_printh(n / 16, base);
		if (count < 0)
			return (-1);
		count = count + ft_printh(n % 16, base);
	}
	else
	{
		count = count + ft_printc(base[n]);
		if (count < 0)
			return (-1);
	}
	return (count);
}
