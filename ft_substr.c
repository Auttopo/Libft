/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:40:02 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/16 15:28:03 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;	
	char	*ary;

	i = 0;
	s_len = ft_strlen(s);
	if (s_len < (start + len))
		len = s_len - start;
	if (s_len < start)
		len = 0;
	if (len > s_len)
		len = s_len;
	ary = malloc(sizeof(char) * (len + 1));
	if (ary == NULL)
		return (NULL);
	while (start + i < s_len && i < len)
	{
		ary[i] = s[start + i];
		i++;
	}
	ary[i] = '\0';
	return (ary);
}
