/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:38:36 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/24 15:41:40 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	last = *lst;
	if (last)
	{
		last = ft_lstlast(last);
		last->next = new;
		last = last->next;
	}
	else
		*lst = new;
}
