/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:59:49 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/22 11:59:49 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;
	t_list	temp;

	new = NULL;
	while (lst != NULL)
	{
		temp.content = f(lst->content);
		if (temp.content == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		elem = ft_lstnew(temp.content);
		if (elem == NULL)
		{
			del(temp.content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
