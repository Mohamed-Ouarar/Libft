/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:17:11 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/13 12:41:26 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*dest;
	const char		*source;

	i = 0;
	dest = (char *)dst;
	source = (const char *)src;
	if (dest == src)
		return (dest);
	while (n > i)
	{
		*(dest + i) = *(source + i);
		i++;
	}
	return (dst);
}
