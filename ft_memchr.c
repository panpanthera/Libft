/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:11:18 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/13 11:46:57 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sdst;
	size_t			i;

	i = 0;
	sdst = (unsigned char *)s;
	while (n-- > 0)
	{
		if (sdst[i] == (unsigned char)c)
			return (sdst + i);
		i++;
	}
	return (0);
}
