/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:10:33 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/20 00:13:11 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *) malloc(sizeof(*elt));
	if (!elt)
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}
