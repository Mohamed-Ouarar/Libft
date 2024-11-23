/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:17:02 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/12 18:07:16 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nod;

	new_nod = malloc(sizeof(t_list));
	if (!new_nod)
		return (NULL);
	new_nod -> content = content;
	new_nod -> next = NULL;
	return (new_nod);
}
