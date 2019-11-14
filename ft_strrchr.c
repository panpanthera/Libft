/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:03:18 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/09 18:15:15 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	int		size;

	last = 0;
	size = ft_strlen(s) + 1;
	if (!s)
		return (NULL);
	while (size > 0)
	{
		if (*s == c)
			last = ((char *)s);
		s++;
		size--;
	}
	return (last);
}
