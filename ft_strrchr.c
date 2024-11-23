/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:16:07 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/11 15:40:22 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + s_len));
	while (s_len >= 0)
	{
		if (*(s + s_len) == (unsigned char)c)
			return ((char *)(s + s_len));
		s_len--;
	}
	return (NULL);
}
