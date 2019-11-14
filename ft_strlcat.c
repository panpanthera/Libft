/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:28:21 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/14 11:00:35 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t size_total;
	size_t i;
	size_t j;

	i = 0;
	if (size == 0 && !dst)
		return (ft_strlen(src));
	size_total = ft_strlen(dst) + ft_strlen(src);
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
	{
		j = ft_strlen(dst);
		while (src[i] != '\0' && j < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
		return (size_total);
	}
}

#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
	char *dest = NULL;
	char *dest2 = NULL;
	//char dest[20];
	//char dest2[20];

size_t vrai = strlcat(dest, argv[1], 0);
printf("strlcat: %zu\n", vrai);

	size_t faux = ft_strlcat(dest2, argv[1], 0);
	printf("ft_strlcat: %zu\n", faux);
}
