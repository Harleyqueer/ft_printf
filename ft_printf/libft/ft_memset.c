/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:30:00 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/15 14:32:52 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	ptr = s;
	i = 0;
	while (n--)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
