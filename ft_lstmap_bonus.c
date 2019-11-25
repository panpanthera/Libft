/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:19:24 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/18 17:20:05 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

void    del(void *content)
{
}
void    *appliacable_fct(void *content)
{
	return NULL;
}
int main()
{
	t_list    *list;
	t_list    *tmp;
	list = ft_lstnew(ft_strdup("Bonjour"));
	list->next = ft_lstnew(ft_strdup("Bonjour1"));
	list->next->next = ft_lstnew(ft_strdup("Bonjour2"));
	tmp = list;
	while (tmp)
	{
		printf("%s->", tmp->content);
		tmp = tmp->next;
	}
	list = ft_lstmap(list, &appliacable_fct, &del);
	tmp = list;
	while (tmp)
	{
		printf("%s->", tmp->content);
		tmp = tmp->next;
	}
}
