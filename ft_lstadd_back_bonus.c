/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:07:24 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/10 20:06:22 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_nod;

	if (!lst || !new)
		return ;
	last_nod = ft_lstlast(*lst);
	if (last_nod == NULL)
		*lst = new;
	else
		last_nod -> next = new;
}
