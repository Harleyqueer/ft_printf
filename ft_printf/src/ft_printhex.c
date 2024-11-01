/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <thmichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:01:16 by thmichel          #+#    #+#             */
/*   Updated: 2024/11/01 11:01:39 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_hexlen(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}

void	ft_puthex(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, format);
		ft_puthex(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar((nb + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((nb - 10 + 'a'));
			if (format == 'X')
				ft_putchar((nb - 10 + 'A'));
		}
	}
}

int	ft_printhex(unsigned int nb, const char format)
{
	ft_puthex(nb, format);
	return (ft_hexlen(nb));
}
