/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:56:56 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/27 15:52:47 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d1;
	unsigned char	*s1;
	size_t			i;

	if (dest == src)
		return (dest);
	d1 = (unsigned char *)dest;
	s1 = (unsigned char *)src;
	i = 0;
	while (d1 > s1 && n)
	{
		d1[n - 1] = s1[n - 1];
		n--;
	}
	while (d1 <= s1 && i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dest);
}
