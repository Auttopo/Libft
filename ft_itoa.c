/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:35:56 by abenabde          #+#    #+#             */
/*   Updated: 2025/11/15 13:40:05 by abenabde         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	n_len(int n, int *len)
{
	if (n > 0)
		n *= -1;
	if (n < -9)
		n_len(n / 10, len);
	*len += 1;
}

char	*ft_itoa(int n)
{
	char	*value;
	int		size;

	size = 0;
	n_len(n, &size);
	if (n < 0)
		size += 1;
	value = malloc(sizeof(char) * (size + 1));
	if (value == NULL)
		return (0);
	if (n < 0)
		value[0] = '-';
	else
		n *= -1;
	value[size] = '\0';
	while (size > 0)
	{
		if (value[size - 1] == '-')
			break ;
		value[size - 1] = ('0' - (n % 10));
		n = n / 10;
		size--;
	}
	return (value);
}
