/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:16:03 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/19 14:38:02 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;
	char	*cast;

	cast = (char *)big;
	i = 0;
	if (little[i] == '\0')
		return (cast);
	while (cast[i] && i < len)
	{
		y = 0;
		while ((cast[y + i] == little[y]) && little[y] && (i + y < len))
			y++;
		if (little[y] == '\0')
			return (&cast[i]);
		i++;
	}
	return (NULL);
}
