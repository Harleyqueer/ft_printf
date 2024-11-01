/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:16:04 by thmichel          #+#    #+#             */
/*   Updated: 2024/11/01 15:16:06 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "stdint.h"

int	ft_ptrlen(unsigned long long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}

void	ft_putptr(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_putptr(nb / 16);
		ft_putptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd((nb + '0'), 1);
		else
			ft_putchar_fd((nb - 10 + 'a'), 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	lenptr;

	lenptr = 2;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		lenptr = 5;
	}
	else
	{
		write(1, "0x", 2);
		ft_putptr(ptr);
		lenptr += ft_ptrlen(ptr);
	}
	return (lenptr);
}
