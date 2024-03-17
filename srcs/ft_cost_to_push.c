/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost_to_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:28:46 by nhan              #+#    #+#             */
/*   Updated: 2024/03/17 14:19:03 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cost_to_push(t_ps **list, t_ps s)
{
	int	cost;
	t_ps	tracker;

	if (!list || !*list)
		return (0);
	cost = 0;
	tracker = **list;
	while (tracker.expected_index < s.expected_index)
	{
		cost++;
		tracker = *(tracker.next);
		if (tracker.expected_index > (tracker.next)->expected_index
		|| tracker.index == 0)
			break ;
	}
	while (tracker.expected_index > s.expected_index)
	{
		cost++;
		tracker = *(tracker.next);
		if (tracker.index == 0
		|| tracker.expected_index < (tracker.previous)->expected_index)
			break;
	}
	return (cost);
}
