/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:48:11 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/14 10:53:52 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdst;
	size_t i;

	csrc = src;
	cdst = dst;
	i = 0;
	if ((!src && !dst) || n == 0)
		return (dst);	
	while (i < n)
	{
		*cdst++ = *csrc++;
		i++;
	}
	return (dst);
}
