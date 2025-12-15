/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:25:43 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/18 22:56:57 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == b)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
