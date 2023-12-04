/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <frgarci2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:22:15 by frgarci2          #+#    #+#             */
/*   Updated: 2023/11/24 12:23:28 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *s, ...);
int	ft_printc(char c);
int	ft_printp(unsigned long n, const char *base);
int	ft_printh(unsigned int n, const char *base);
int	ft_printn(int n);
int	ft_prints(char *s);
int	ft_printu(unsigned int n);

#endif
