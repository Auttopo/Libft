/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:37:45 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/09 17:32:32 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	de_si;
	size_t	si_si;

	i = 0;
	de_si = 0;
	si_si = 0;
	while (dst[de_si])
		de_si++;
	while (src[si_si])
		si_si++;
	if (dst == 0 || src == 0 || de_si >= size)
		return (size + si_si);
	while ((src[i]) && (i < (size - de_si - 1)))
	{
		dst[de_si + i] = src[i];
		i++;
	}
	dst[de_si + i] = '\0';
	return (de_si + si_si);
}
