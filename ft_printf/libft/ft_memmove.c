/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:02:41 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/16 16:09:30 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*dst;

	tmp = (char *) src;
	dst = (char *) dest;
	if (dst > tmp)
	{
		while (n > 0)
		{
			n--;
			dst[n] = tmp[n];
		}
	}
	else
		ft_memcpy(dst, tmp, n);
	return (dest);
}
