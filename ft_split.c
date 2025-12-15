/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:58:43 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/22 11:50:11 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t count, (i);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count += 1;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **arr, size_t y)
{
	while (y)
	{
		y--;
		free(arr[y]);
	}
	free(arr);
	return (NULL);
}

static size_t	ft_charalloc(char **arr, char const *s, char c, size_t y)
{
	size_t count, (start), (index);
	count = 0;
	index = 0;
	while (s[index] && !count)
	{
		if (s[index] != c)
		{
			start = index;
			while (s[index] != c && s[index])
			{
				count++;
				index++;
			}
		}
		else
			index++;
	}
	arr[y] = ft_substr(s, start, count);
	return (index);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	size_t count, (i), (y), start;
	if (!s)
		return (NULL);
	count = ft_count(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	y = 0;
	i = 0;
	start = 0;
	while (y < count)
	{
		i = ft_charalloc(arr, s + start, c, y);
		if (!arr[y])
			return (ft_free(arr, y));
		start += i;
		y++;
	}
	arr[y] = NULL;
	return (arr);
}
