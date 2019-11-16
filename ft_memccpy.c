/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:19:58 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/16 14:38:45 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*sdst;
	unsigned char	*ssrc;
	size_t			i;

	sdst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		sdst[i] = ssrc[i];
		if (ssrc[i] == (unsigned char)c)
		{
			sdst[i] = ssrc[i];
			i++;
			return (sdst + i);
		}
		i++;
	}
	return (NULL);
}
