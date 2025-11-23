/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:57:16 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/10 15:55:21 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			temp = ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		temp = ((char *)s + i);
	if (temp != 0)
		return (temp);
	return (0);
}
