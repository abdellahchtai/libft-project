/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:32:20 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/25 13:08:36 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_len(long nb)
{
	int i, (signe);
	i = 0;
	signe = 1;
	if (nb < 0)
		signe *= -1;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i * signe);
}

static char	*ft_zero(void)
{
	int		i;
	char	*s;

	i = 0;
	s = malloc(2);
	s[i++] = '0';
	s[i] = '\0';
	return (s);
}

static long	ft_convert(size_t len, int *signe, long *nb)
{
	len = -len;
	*signe *= -1;
	len++;
	*nb = *nb * -1;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		signe;

	long len, (nb);
	if (n == 0)
		return (ft_zero());
	nb = n;
	signe = 1;
	len = ft_len(nb);
	if (len < 0)
		len = ft_convert(len, &signe, &nb);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
	while (len >= 0)
	{
		s[len--] = nb % 10 + '0';
		nb /= 10;
	}
	if (signe < 0)
		s[0] = '-';
	return (s);
}
