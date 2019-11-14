/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:46:06 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/13 11:47:22 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*rval;
	unsigned int	i;

	i = 0;
	if (!s || start > ft_strlen(s))
		return (NULL);
	if (!(rval = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < (ft_strlen(s) - start) && len > 0)
	{
		rval[i] = s[start + i];
		i++;
		len--;
	}
	rval[i] = '\0';
	return (rval);
}