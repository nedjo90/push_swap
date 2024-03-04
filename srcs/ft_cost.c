/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:47:02 by nhan              #+#    #+#             */
/*   Updated: 2024/03/04 16:11:37 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
static void	ft_cost_after_push(t_ps **list, t_ps s)
{
	
}*/

void	ft_cost(t_ps **list_a, t_ps **list_b)
{
	int	size;
	int	cost;

	if (!list_b || !*list_b || !list_a)
		return ;
	size = (*list_b)->previous->index;
	while ((*list_b)->next->index != 0)
	{
		cost = ((*list_b)->index);
		if (cost > size / 2)
			cost = (cost - size) * -1 + 1;	
		(*list_b)->cost = cost;
		//(*list_b)->cost += ft_cost_after_push(list_a, **list);
		(*list_b) = (*list_b)->next; 
	}
	cost = ((*list_b)->index);
	if (cost > size / 2)
		cost = (cost - size) * -1 + 1;
	(*list_b)->cost = cost;
	(*list_b) = (*list_b)->next; 
}
