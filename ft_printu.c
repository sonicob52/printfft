/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:48:41 by frgarci2          #+#    #+#             */
/*   Updated: 2023/11/24 13:38:06 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count = count + ft_printn(n / 10);
		if (count < 0)
			return (-1);
		count = count + ft_printn(n % 10);
	}
	else
	{
		count = count + ft_printc(n + 48);
		if (count < 0)
			return (-1);
	}
	return (count);
}
