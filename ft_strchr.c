/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:21:48 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/14 13:36:47 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int size;

	size = ft_strlen(s) + 1;
	while (size > 0)
	{
		if (*s == c)
			return ((char *)s);
		s++;
		size--;
	}
	return (0);
}
