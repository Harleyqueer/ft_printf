/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb_unb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <thmichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:09:35 by thmichel          #+#    #+#             */
/*   Updated: 2024/11/01 11:14:23 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	char		*str;
	int			len;
	long int	nbr;

	nbr = n;
	len = len_nb(n);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

int	ft_printnb(int a)
{
	char	*str;
	size_t	len;

	str = ft_itoa(a);
	ft_putstr(str);
	len = ft_strlen(str);
	free(str);
	return ((int) len);
}

int	ft_printunb(unsigned int a)
{
	char	*str;
	size_t	len;

	str = ft_uitoa(a);
	ft_putstr(str);
	len = ft_strlen(str);
	free(str);
	return ((int) len);
}
