/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:29:25 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/11 17:12:38 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_same(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((dest + i) == src || (dest + i) == (src + n))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	if (is_same(((unsigned char *)dest), ((unsigned char *)src), n) == 1)
	{
		if (((unsigned char *)dest) < ((unsigned char *)src))
		{
			while (i < n)
			{
				*((unsigned char *)dest + i) = *((unsigned char *)src + i);
				i++;
			}
			return (dest);
		}
	}
	while (n > 0)
	{
		n--;
		*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	}
	return (dest);
}
