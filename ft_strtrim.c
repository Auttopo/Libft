/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:22:17 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/12 15:22:26 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	c_del(const char *s, const char *set, size_t start, size_t end)
{
	size_t	e;
	size_t	del;
	size_t	mov;

	del = 0;
	if (start < end)
		mov = 1;
	else
		mov = -1;
	while (start != end)
	{
		e = 0;
		if (ft_strchr(set, s[start]) == 0)
			return (del);
		del += 1;
		start += mov;
	}
	return (del);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	c_start;
	size_t	c_end;
	size_t	size;
	char	*ary;

	i = 0;
	size = ft_strlen(s1);
	c_start = c_del(s1, set, 0, size);
	c_end = c_del(s1, set, size, 0) - 1;
	if ((c_start + c_end) > size || s1[0] == '\0')
		size = 0;
	else
		size = size - c_start - c_end;
	ary = malloc(sizeof(char) * (size + 1));
	if (ary == NULL)
		return (NULL);
	while (i < size)
	{
		ary[i] = s1[i + c_start];
		i++;
	}
	ary[i] = '\0';
	return (ary);
}
