/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:44:43 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/26 14:40:45 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*str;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	while (n)
	{
		str[n - 1] = a;
		n--;
	}
	return (str);
}
