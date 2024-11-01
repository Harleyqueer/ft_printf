/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <thmichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:57:53 by thmichel          #+#    #+#             */
/*   Updated: 2024/11/01 11:07:21 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	return (i);
}

int	ft_printstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	else
		return (ft_putstr(str));
}

int	len_nb(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
