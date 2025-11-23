/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:33:57 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/16 09:25:30 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ary;

	i = 0;
	ary = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ary == NULL)
		return (NULL);
	while (s[i])
	{
		ary[i] = f(i, s[i]);
		i++;
	}
	ary[i] = '\0';
	return (ary);
}
