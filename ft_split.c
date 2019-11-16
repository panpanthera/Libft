/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:46:29 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/16 14:41:20 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wrd(char *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (*s)
	{
		if (word == 0 && *s != c)
		{
			word = 1;
			i++;
		}
		else if (word == 1 && *s == c)
			word = 0;
		s++;
	}
	return (i);
}

static int	wlen(char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static char	**ft_null(char **rval, int i)
{
	while (i > 1)
		free(rval[i--]);
	free(rval);
	return (rval);
}

char		**ft_split(char const *s, char c)
{
	char	**rval;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(rval = (char **)malloc(sizeof(char *) * (wrd((char *)s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s != c && *s)
		{
			if (!(rval[i++] = ft_substr((char *)s, 0, wlen((char *)s, c))))
				return (ft_null(rval, i));
			while (*s != c && *s)
				s++;
		}
		if (*s == c && *s)
			s++;
	}
	rval[i] = NULL;
	return (rval);
}
