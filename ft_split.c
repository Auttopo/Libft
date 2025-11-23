/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenabde <abenabde@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:41:03 by abenabde          #+#    #+#             */
/*   Updated: 2025/08/28 23:44:06 by abenabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **list)
{
	size_t	i;

	i = 0;
	while (list[i] != NULL)
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

static char	*add_elem(char const *ary, size_t start, size_t size)
{
	char	*elem;
	size_t	i;

	i = 0;
	elem = malloc(sizeof(char) * (size));
	if (elem == NULL)
		return (NULL);
	while (i < size - 1)
	{
		elem[i] = ary[start + i + 1];
		i++;
	}
	elem[i] = '\0';
	return (elem);
}

static char	**incr_list(char **list, char *elem)
{
	char	**biger;
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	if (elem == NULL)
		return (free_all(list));
	while (list[size] != NULL)
		size++;
	biger = malloc(sizeof(char *) * (size + 2));
	if (biger == NULL)
	{
		free (elem);
		return (free_all(list));
	}
	while (i < size)
	{
		biger[i] = list[i];
		i++;
	}
	biger[i] = elem;
	biger[i + 1] = NULL;
	free(list);
	return (biger);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	size_t	sep;

	i = 0;
	sep = -1;
	list = malloc(sizeof(char *));
	if (list == NULL)
		return (NULL);
	list[0] = NULL;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (i - sep > 1)
			{
				list = incr_list(list, add_elem(s, sep, i - sep));
				if (list == NULL)
					return (NULL);
			}
			sep = i;
		}
		i++;
	}
	return (list);
}
