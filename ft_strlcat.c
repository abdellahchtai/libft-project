/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:51:21 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/25 12:53:41 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(src);
	if (!size)
		return (len1);
	len2 = ft_strlen(dst);
	if (size <= len2)
		return (size + len1);
	i = 0;
	while (i < size - len2 - 1 && src[i])
	{
		dst[i + len2] = src[i];
		i++;
	}
	dst[i + len2] = '\0';
	return (len2 + len1);
}
