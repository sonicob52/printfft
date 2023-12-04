/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:59:41 by frgarci2          #+#    #+#             */
/*   Updated: 2023/11/24 12:54:00 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printn(int n)
{
	int	count;

	count = 0;
	if (n <= -2147483648)
		return (write(1, "-2147483648", 11));
	else if (n < 0)
	{
		count = count + ft_printc('-');
		if (count < 0)
			return (-1);
		n = -n;
		count = count + ft_printn(n);
	}
	else if (n > 9)
	{
		count = count + ft_printn(n / 10);
		if (count < 0)
			return (-1);
		count = count + ft_printn(n % 10);
	}
	else
		count = count + ft_printc(n + 48);
	if (count < 0)
		return (-1);
	return (count);
}
