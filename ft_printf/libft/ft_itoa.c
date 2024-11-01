/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:02:23 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/18 22:10:23 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			signe;
	long int	nbr;

	nbr = n;
	len = len_nb(n);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	signe = 0;
	if (n < 0)
	{
		signe = 1;
		nbr = -nbr;
		str[0] = '-';
	}
	while (len > signe)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
