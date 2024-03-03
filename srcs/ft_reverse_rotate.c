/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 01:53:17 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 02:04:55 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_ps **list)
{
	if (!list || !*list)
		return ;
	if ((*list)->next->index == 0)
		return ;
	(*list)->index = (*list)->previous->index;
	(*list) = (*list)->next;
	while ((*list)->index != 0)
	{
		(*list)->index -= 1;
		(*list) = (*list)->next;
	}
	(*list)->previous->index += 1;
}
