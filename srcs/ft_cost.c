/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:47:02 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 23:17:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
int	ft_is_min(t_ps **list,t_ps s)
{
	t_ps	tracker;
	int	min;

	if (!*list || !list)
		return (1);
	tracker = (*list);
	min = s.value;
	while (tracker.index != 0)
	{
		if (tracker.value < min)
			min = tracker.value;
		tracker = *(tracker.next);
	}
	if (min == s.value)
		return (1);
	return (0);
}

int	ft_cost_min(t_ps **list, t_ps s)
{
	t_ps	tracker;

	
}*/

static int	ft_cost_to_push(t_ps **list, t_ps s)
{
	int	cost;
	t_ps	tracker;

	if (!list || !*list)
		return (0);
//	if (ft_is_min(list, s)
//		return ft_cost_min(list, s);
	cost = 0;
	tracker = **list;
//	ft_printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	while (tracker.expected_index > s.expected_index)
	{
//		ft_printf("%d > %d ===> %d\n",tracker.value ,s.value, cost + 1);
		cost++;
		tracker = *(tracker.next);
		if (tracker.expected_index < (tracker.previous)->expected_index)
			break ;
		if (tracker.index == 0)
			break;
	}
	while (tracker.expected_index < s.expected_index)
	{
//		ft_printf("%d < %d ===> %d\n",tracker.value ,s.value, cost + 1);
		cost++;
		tracker = *(tracker.next);
		if (tracker.index == 0 || tracker.expected_index < (tracker.previous)->expected_index)
			break;
	}
//	ft_printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
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
