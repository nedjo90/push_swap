/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 00:17:00 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 00:47:31 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_front(t_ps **list, t_ps *ps)
{
	if (!ps || !list)
		return ;
	if (!*list)
		*list = ps;
	else
	{
		ps->next = (*list);
		ps->previous = (*list)->previous;
		ps->index = 0;
		(*list)->previous->next = ps;
		(*list)->previous = ps;
		(*list)->index += 1;
		(*list) = (*list)->next;
		while ((*list)->index != 0)
		{
			(*list)->index += 1;
			(*list) = (*list)->next;
		}
	}
}
