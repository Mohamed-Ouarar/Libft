/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:17:45 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/11 09:27:51 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_x(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*new_nod;
	t_list	*new_list;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = f(lst -> content);
		if (!content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_nod = ft_lstnew(content);
		if (!new_nod)
		{
			del(content);
			ft_lstclear(&new_list, del);
		}
		ft_lstadd_back(&new_list, new_nod);
		lst = lst -> next;
	}
	return (new_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	if (!f || !del || !lst)
		return (NULL);
	return (ft_x(lst, f, del));
}
