/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 01:10:35 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 01:16:05 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_ps **list)
{
	if (!list || !*list)
		return ;
	if ((*list)->next->index == 0)
		return ;
	(*list) = (*list)->next;
	while ((*list)->index != 0)
	{
		(*list)->index -= 1;
		(*list) = (*list)->next;
	}
	(*list)->index = (*list)->previous->index +  1;
	(*list) = (*list)->next;
}
