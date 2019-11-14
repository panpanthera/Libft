/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:46:29 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/14 12:47:30 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc;

	if (!(calloc = malloc(count * size)))
		return (NULL);
	ft_bzero(calloc, count * size);
	return (calloc);
}
