/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:55:23 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/14 13:30:28 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*sdst;
	unsigned char	*ssrc;
	size_t			i;

	if (len == 0 || (!dst && !src))
		return (dst);	
	sdst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	i = 0;
	if (sdst < ssrc)
	{
		while (i < len)
		{
			*sdst++ = *ssrc++;
			i++;
		}
	}
	else if (sdst > ssrc)
	{
		while (len > 0)
		{
			sdst[len - 1] = ssrc[len - 1];
			len--;
		}
	}
	return (dst);
}
