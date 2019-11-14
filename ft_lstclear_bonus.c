/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:42:16 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/13 11:24:13 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmpp;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmpp = tmp->next;
		del((tmp)->content);
		free(tmp);
		tmp = tmpp;
	}
	*lst = NULL;
}
