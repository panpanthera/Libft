/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:46:22 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/18 16:53:56 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int n)
{
	int size;

	size = 1;
	if (n >= 0)
	{
		while (n >= 10)
		{
			n /= 10;
			size++;
		}
		return (size);
	}
	else if (n < 0)
		n *= -1;
	return (ft_nblen(n) + 1);
}

static char		*ft_fill_itoa(char *rval, int n, int size)
{
	rval[--size] = '\0';
	if (n >= 0)
	{
		while (n > 0)
		{
			rval[--size] = 48 + (n % 10);
			n /= 10;
		}
	}
	else if (n < 0)
	{
		while (--size)
		{
			rval[size] = 48 - (n % 10);
			n /= 10;
		}
		rval[size] = '-';
	}
	return (rval);
}

char		*ft_itoa(int n)
{
	char	*rval;
	int		size;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_nblen(n) + 1;
	if (!(rval = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	rval = ft_fill_itoa(rval, n, size);
	return (rval);
}
