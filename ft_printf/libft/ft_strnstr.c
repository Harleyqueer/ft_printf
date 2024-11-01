/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:33:54 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/16 12:40:04 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && j + i < len)
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
