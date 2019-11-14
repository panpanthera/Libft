/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:43:03 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/13 11:58:27 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_checker(char check, const char *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == check)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_start(const char *s1, const char *set)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_checker(s1[i], set) > 0)
			count++;
		else
			return (count);
		i++;
	}
	return (count);
}

static int	ft_end(const char *s1, const char *set, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		if (ft_checker(s1[i], set) > 0)
			count++;
		else
			return (count);
		i--;
	}
	return (count);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		count;
	int		start;
	int		end;
	char	*rval;

	if (s1 && set)
	{
		rval = 0;
		len = ft_strlen(s1);
		start = ft_start(s1, set);	
		end = ft_end(s1, set, len - 1);
		count = start + end;
		if (len - start <= 0)
		{
			if (!(rval = malloc(sizeof(char) * 1)))
				return (NULL);
			*rval = '\0';
			return (rval);
		}
		rval = ft_substr(s1, start, len - end - start);
		return (rval);
	}
	return (0);
}
