/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:25:53 by frgarci2          #+#    #+#             */
/*   Updated: 2023/11/24 13:29:03 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count = count + (ft_printp(n / 16, base));
		if (count < 0)
			return (-1);
		count = count + (ft_printp(n % 16, base));
	}
	else
	{
		count = count + (ft_printc(base[n]));
		if (count < 0)
			return (-1);
	}
	return (count);
}
