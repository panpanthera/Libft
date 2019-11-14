/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:19:24 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/14 10:59:03 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(lst->content);
	if (!new)
		return (NULL);
	new->content = f(lst->content);
	if (!new->content)
	{
		free(new);
		return (NULL);
	}
	new->next = ft_lstmap(lst->next, f, del);
	return (new);
}
