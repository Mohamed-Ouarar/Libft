/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarar <mouarar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:11:26 by mouarar           #+#    #+#             */
/*   Updated: 2024/11/12 17:04:38 by mouarar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	n_size(int n)
{
	int	counter;
	int	num;

	num = n;
	counter = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (num < 0)
	{
		num = num * -1;
		counter++;
	}
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

static	char	*if_zero(char *zero)
{
	zero[0] = '0';
	return (zero);
}

static int	less_then_zero(char *ascii, int number)
{
	number = -number;
	ascii[0] = '-';
	return (number);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*num;

	size = n_size(n);
	num = malloc(sizeof(char) * (size + 1));
	if (!num)
		return (NULL);
	num[size] = '\0';
	if (n == 0)
		return (if_zero(num));
	if (n == -2147483648)
	{
		n = -214748364;
		num[--size] = '8';
	}
	if (n < 0)
		n = less_then_zero(num, n);
	while (n > 0)
	{
		num[--size] = n % 10 + 48;
		n /= 10;
	}
	return (num);
}
