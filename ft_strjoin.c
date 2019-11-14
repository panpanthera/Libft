/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:58:33 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/12 12:07:50 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fill_join(char const *s1, char const *s2, int len1, int len2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (!(p = (char *)malloc((len1 + len2 + 1) * sizeof(char))))
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i < len2)
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*rval;

	if (!s1 || !s2)
		return (NULL);
	rval = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	rval = ft_fill_join(s1, s2, len1, len2);
	return (rval);
}
