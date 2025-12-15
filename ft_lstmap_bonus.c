/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:56:03 by abchtaib          #+#    #+#             */
/*   Updated: 2025/10/27 16:16:18 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*head;

	if (!f || !del || !lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!newlst)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, newlst);
		lst = lst->next;
	}
	return (head);
}
