/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 08:47:02 by nhan              #+#    #+#             */
/*   Updated: 2024/03/16 17:32:16 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_real_cost(t_ps n, t_ps **list_a, t_ps **list_b)
{
	int	cost;
	int	size_a;
	int	size_b;

	size_a = ft_size_list(list_a);
	size_b = ft_size_list(list_b);
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

	if (!list_b || !*list_b || !list_a || !*list_a) 
		return NULL;
	*(list_a) = (*list_a)->next;
	min_cost = (*list_a);
	while((*list_a)->index != 0)
	{
		(*list_a)->cost = ((*list_a)->index);
		printf("coucou");
		(*list_a)->cost_push = ft_cost_to_push(list_b, **list_a);
		if (ft_real_cost(*min_cost, list_a, list_b)\
		> ft_real_cost(**list_a, list_a, list_b))
			min_cost = *list_a;
		(*list_a) = (*list_b)->next;
	}
	(*list_a)->cost = ((*list_a)->index);
	(*list_a)->cost_push = ft_cost_to_push(list_b, **list_a);
	if (ft_real_cost(*min_cost, list_a, list_b)\
	> ft_real_cost(**list_a, list_a, list_b))
		min_cost = *list_a;
	(*list_a) = (*list_b)->next;
	return (min_cost);
}


/*
t_ps	*ft_cost(t_ps **list_a, t_ps **list_b)
{
	t_ps	*min_cost;

	if (!list_b || !*list_b || !list_a || !*list_a)
		return NULL;
	*(list_b) = (*list_b)->next;
	min_cost = (*list_b);
	while ((*list_b)->index != 0)
	{
		(*list_b)->cost = ((*list_b)->index);
		(*list_b)->cost_push = ft_cost_to_push(list_a, **list_b);
		if (ft_real_cost(*min_cost, list_a, list_b)\
		> ft_real_cost(**list_b, list_a, list_b))
			min_cost = *list_b;
		(*list_b) = (*list_b)->next;
	}
	(*list_b)->cost = ((*list_b)->index);
	(*list_b)->cost_push = ft_cost_to_push(list_a, **list_b);
	if (ft_real_cost(*min_cost, list_a, list_b)\
	> ft_real_cost(**list_b, list_a, list_b))
			min_cost = *list_b;
	return (min_cost);
}*/
