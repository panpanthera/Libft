/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:05:00 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/12 14:36:51 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*s2;

	size = ft_strlen(s1) + 1;
	if (!(s2 = (char *)malloc((size) * sizeof(char))))
		return (NULL);
	s2 = ft_memcpy(s2, s1, size);
	return (s2);
}
