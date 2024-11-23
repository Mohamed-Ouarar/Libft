/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:35:43 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/11 17:43:51 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mv;

	mv = (unsigned char *)b;
	while (len > 0)
	{
		*mv = (unsigned char)c;
		mv++;
		len--;
	}
	return (b);
}
