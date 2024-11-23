/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:05:54 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/13 09:04:21 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow_handle(long r, int s, const char *str)
{
	if (r > (9223372036854775807 / 10) || (r == (9223372036854775807 / 10) \
		&& (*str - '0') > (9223372036854775807 % 10)))
	{
		if (s == -1)
			return (0);
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	int				overflow_check;
	long			result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		overflow_check = overflow_handle(result, sign, &str[i]);
		if (overflow_check != 1)
			return (overflow_check);
		result = result * 10 + str[i] - 48;
		i++;
	}
	return ((int)(result * sign));
}
