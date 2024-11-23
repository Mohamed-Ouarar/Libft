/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:39:43 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/22 21:25:02 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	start(const char *str1, const char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] && str2[j])
	{
		if (str1[i] == str2[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static	int	ft_end(const char *st1, const char *st2, \
			int string_1_len, int string_2_len)
{
	int	seet_len;

	seet_len = string_2_len;
	while (seet_len >= 0 && string_1_len >= 0)
	{
		if (st1[string_1_len] == st2[seet_len])
		{
			string_1_len--;
			seet_len = string_2_len;
		}
		else
			seet_len--;
	}
	return (string_1_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		star;
	int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	star = start(s1, set);
	end = ft_end(s1, set, (ft_strlen(s1) - 1), (ft_strlen(set) - 1));
	ptr = ft_substr(s1, star, end - star + 1);
	return (ptr);
}
