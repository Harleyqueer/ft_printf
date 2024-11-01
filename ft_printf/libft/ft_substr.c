/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:53:22 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/18 14:49:59 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	char	*str;

	i = 0;
	j = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (slen <= len + start)
		len = slen - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main()
{
	const char s[20] = "ceci est un test";
	printf("%s", ft_substr(s, 5, 12));
	return (0);
}
*/	
