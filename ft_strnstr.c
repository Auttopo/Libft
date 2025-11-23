/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:59:07 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/09 17:19:45 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (little[i] == '\0')
		return (((char *)big + i));
	while (big[i] && i < len)
	{
		f = 0;
		while ((big[i + f] == little[f]) && (big[i + f]) && (i + f) < len)
		{
			f++;
			if (little[f] == '\0')
			{
				return (((char *)big + i));
			}
		}
		i++;
	}
	return (0);
}
