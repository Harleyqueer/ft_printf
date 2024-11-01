/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <thmichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:06:40 by thmichel          #+#    #+#             */
/*   Updated: 2024/11/01 16:01:47 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

int	ft_format(va_list args, const char format)
{
	int	lenght;

	lenght = 0;
	if (format == 'c')
		lenght += ft_putchar(va_arg(args, int));
	if (format == 'd' || format == 'i')
		lenght += ft_printnb(va_arg(args, int));
	if (format == 'u')
		lenght += ft_printunb(va_arg(args, unsigned int));
	if (format == 's')
		lenght += ft_printstr(va_arg(args, char *));
	if (format == '%')
		lenght += ft_putchar('%');
	if (format == 'x' || format == 'X')
		lenght += ft_printhex(va_arg(args, unsigned int), format);
	if (format == 'p')
		lenght += ft_printptr(va_arg(args, unsigned long long));
	return (lenght);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	args;
	int		lenght;

	i = 0;
	lenght = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			lenght += ft_format(args, str[i + 1]);
			i++;
		}
		else
			lenght += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (lenght);
}
