/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:01:05 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/20 17:40:50 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (s1[i] && set[y])
	{
		if (s1[i] == set[y])
		{
			y = 0;
			i++;
		}
		else
			y++;
	}
	return (i);
}

size_t	ft_last(char const *s1, char const *set, size_t len)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (len > 0 && s1[len - 1] && set[i])
	{
		if (s1[len - 1] == set[i])
		{
			len--;
			i = 0;
			count += 1;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	last;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	start = ft_start(s1, set);
	last = ft_last(s1, set, len);
	if (start + last >= len)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	ptr = ft_substr(s1, start, len - (start + last));
	return (ptr);
}
