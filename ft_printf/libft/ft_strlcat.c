/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:39:45 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/19 11:47:11 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	j = 0;
	while (src[j] != '\0' && j + i < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j + i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
