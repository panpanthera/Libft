/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:30:05 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/16 14:14:51 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_minmax(unsigned int neg)
{
	if (neg == 0)
		return (-1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	unsigned long int	nb;
	int					neg;

	nb = 0;
	neg = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
	{
		neg++;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str) == 1)
	{
		nb = nb * 10 + *str - 48;
		str++;
	}
	if (nb > 2147483648 && nb > 9223372036854775807)
		return (ft_minmax(neg));
	if (neg == 1)
		nb = -(nb);
	return (nb);
}
