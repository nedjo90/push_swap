/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 00:25:43 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 01:06:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*ft_del_first(t_ps **list)
{
	t_ps	*del;
	if (!list || !*list)
		return (NULL);
	if ((*list)->next->index == 0)
	{
		del = *list;
		(*list) = NULL;
		return (del);
	}
	del = *list;
	del->previous->next = del->next;
	del->next->previous = del->previous;
	*list = del->next;
	(*list)->index = 0;
	(*list) = (*list)->next;
	del->next = del;
	del->previous = del;
	while ((*list)->index != 0)
	{
		(*list)->index -= 1;
		(*list) = (*list)->next;
	}
	return (del);
}
