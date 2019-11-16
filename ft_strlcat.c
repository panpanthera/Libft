/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:28:21 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/16 17:31:34 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t size_total;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	size_total = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	size_total += i;
	while (src[j] != '\0')
		j++;
	size_total += j;
	if (i == size)
		return (size_total);
	j = 0;
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (size_total);
}
