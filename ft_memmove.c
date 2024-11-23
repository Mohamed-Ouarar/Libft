/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:12:29 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/12 19:59:53 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dest;
	const char		*source;

	if (len == 0 || src == dst)
		return (dst);
	if (dst > src)
	{
		dest = (char *)dst;
		source = (const char *)src;
		while (len > 0)
		{
			len--;
			*(dest + len) = *(source + len);
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
