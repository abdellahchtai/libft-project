/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:42:27 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/27 15:44:57 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d1;
	unsigned char	*s1;
	size_t			i;

	if (dest == src)
		return (dest);
	d1 = (unsigned char *)dest;
	s1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (d1);
}
