/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:47:02 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 16:53:59 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_cost_to_push(t_ps **list, t_ps s)
{
	int	cost;
	t_ps	tracker;

	if (!list || !*list)
		return (0);
	cost = 1;
	tracker = **list;
	if (s.value > tracker.value)
	{
		while (tracker.value < s.value \
			&& (tracker.next)->value > tracker.value)
		{
			cost++;
			tracker = *(tracker.next);
		}
	}
	else
	{
		while (tracker.value > s.value\
			&& tracker.index != 0)
		{
			cost++;
			tracker = *(tracker.next);
		}
		while (tracker.value < s.value\
			&& (tracker.next)->value > tracker.value)
		{
			cost++;
			tracker = *(tracker.next);
		}
	}
	if (tracker.index == 0)
		return (0);
	return (cost);
}

int	ft_real_cost(t_ps n, int size_a, int size_b)
{
	int	cost;

	cost = 0;
	if (n.cost > size_b / 2)
		cost += (n.cost - size_b) * -1 + 1;
	else
	{
		cost += n.cost;
	}
	if (n.cost_push > size_a / 2)
		cost += (n.cost_push - size_a) * -1 + 1;
	else
	{
		cost += n.cost_push;
	}
	return cost;

}

t_ps	*ft_cost(t_ps **list_a, t_ps **list_b)
{
	t_ps	*min_cost;
	int	size_a;
	int	size_b;

	if (!list_b || !*list_b || !list_a || !*list_a)
		return NULL;
	size_a = ft_size_list(list_a);
	size_b = ft_size_list(list_b);
	*(list_b) = (*list_b)->next;
	min_cost = (*list_b);
	while ((*list_b)->index != 0)
	{
		(*list_b)->cost = ((*list_b)->index);
		(*list_b)->cost_push = ft_cost_to_push(list_a, **list_b);
		if (ft_real_cost(*min_cost, size_a, size_b) > ft_real_cost(**list_b, size_a, size_b))
			min_cost = *list_b;
		(*list_b) = (*list_b)->next; 
	}
	(*list_b)->cost = ((*list_b)->index);
	(*list_b)->cost_push = ft_cost_to_push(list_a, **list_b);
	if (ft_real_cost(*min_cost, size_a, size_b) > ft_real_cost(**list_b, size_a, size_b))
			min_cost = *list_b;
	return (min_cost);
}
