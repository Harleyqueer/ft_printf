/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:47:18 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/18 18:47:38 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	if (nmeb == 0 || size == 0)
	{
		ptr = malloc (nmeb * size);
		return (ptr);
	}
	ptr = malloc (nmeb * size);
	if (ptr)
		ft_bzero(ptr, nmeb * size);
	return (ptr);
}
