/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_in_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:28:15 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 00:36:17 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	cost_in_back(t_ps *item, t_ps *list)
{
	if (item->value <= list->min->value)
	{
		item->cost_in = item->cost + list->min->cost;
		item->best = list->min;
	}
	else if (item->value >= list->max->value)
	{
		item->cost_in = item->cost + list->min->cost;
		item->best = list->min;
	}
	else
	{
		while (!(item->value <= list->value
				&& item->value >= list->prev->value))
			list = list->next;
		item->cost_in = item->cost + list->cost;
		item->best = list;
	}
}
