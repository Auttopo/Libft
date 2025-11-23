/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:51:35 by abenabde          #+#    #+#             */
/*   Updated: 2025/09/03 23:03:02 by abenabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*ary;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	ary = malloc(sizeof(char) * (size + 1));
	if (ary == NULL)
		return (0);
	while (s1[i])
	{
		ary[i] = s1[i];
		i++;
	}
	while (i < size)
	{
		ary[i] = s2[j];
		i++;
		j++;
	}
	ary[i] = '\0';
	return (ary);
}
