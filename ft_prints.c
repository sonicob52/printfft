/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:09:42 by frgarci2          #+#    #+#             */
/*   Updated: 2023/11/24 13:35:54 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prints(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (ft_prints("(null)"));
	while (s[i] != '\0')
	{
		count = count + (ft_printc(s[i]));
		i++;
		if (count < 0)
			return (-1);
	}
	return (count);
}
