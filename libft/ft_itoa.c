/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:37:14 by egolboyu          #+#    #+#             */
/*   Updated: 2024/03/20 16:37:16 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

static long int	ft_len(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*x;
	long int			len;
	unsigned int		number;
	int					sign;

	sign = 1;
	len = ft_len(n);
	x = (char *)malloc(sizeof(char) * (len + 1));
	if (!(x))
		return (NULL);
	x[len--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		x[0] = '-';
	}
	else
		number = n;
	x = ft_array(x, number, len);
	return (x);
}
