/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_head.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:11:50 by nhan              #+#    #+#             */
/*   Updated: 2024/03/02 23:58:02 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_head(t_ps **list)
{
	t_ps	*first;

	if (!list || (*list)->next->index == 0)
		return ;
	first = (*list)->next;
	(*list)->next = first->next;
	first->next->previous = (*list);
	first->previous = (*list)->previous;
	first->next = (*list);
	(*list)->previous->next = first;
	(*list)->previous = first;
	first->index = 0;
	(*list)->index = 1;
	*list = first;
}
