/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpagacz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:00:33 by jpagacz           #+#    #+#             */
/*   Updated: 2019/11/14 13:10:46 by jpagacz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (*alst == NULL)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		tmp = ft_lstlast(*alst);
		tmp->next = new;
		new->next = NULL;
	}
}
