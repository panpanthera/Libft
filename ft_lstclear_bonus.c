/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:42:16 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/16 17:25:37 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*next;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		del((tmp)->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
