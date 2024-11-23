/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_by_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:33:33 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/14 15:41:39 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_by_c(char const *str, char c)
{
	int	i;
	int	words;
	int	inword;

	i = 0;
	words = 0;
	inword = 0;
	while (str[i])
	{
		if (!inword && str[i] != c)
		{
			inword = 1;
			words++;
		}
		if (inword && str[i] == c)
			inword = 0;
		i++;
	}
	return (words);
}
