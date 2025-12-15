/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:23:28 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/27 16:14:39 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*move;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		move = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = move;
	}
	*lst = NULL;
}
