/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:44:45 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/10 13:06:57 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1st;
	unsigned char	*s2st;
	size_t			i;

	s1st = (unsigned char *)s1;
	s2st = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1st[i] != s2st[i])
			return (s1st[i] - s2st[i]);
		i++;
	}
	return (0);
}
