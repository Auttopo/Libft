/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:44:23 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/16 15:22:05 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ary;

	i = 0;
	ary = NULL;
	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	if (nmemb <= 0 || size <= 0)
		size = 0;
	ary = malloc(size * nmemb);
	if (ary == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		ary[i] = 0;
		i++;
	}
	return ((void *)ary);
}
