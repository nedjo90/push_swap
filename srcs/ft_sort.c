/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:21:03 by nhan              #+#    #+#             */
/*   Updated: 2024/03/04 16:56:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_order(t_ps **list_a, t_ps **list_b)
{

	while ((*list_a)->next->index != 0)
	{
		ft_pb(list_a, list_b);
	}
	ft_pa(list_a, list_b);
	ft_ra(list_a);	
	while (*list_b)
	{
		ft_pa(list_a, list_b);
		ft_rra(list_a);
	}
}

int	ft_is_reverse_sorted(t_ps **list)
{
	t_ps	*temp;

	temp = *list;
	if (temp->next == temp)
		return (1);
	while (temp->next->index != 0)
	{
		if (temp->next->value > temp->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_is_sorted(t_ps **list)
{
	t_ps	*temp;

	temp = (*list);
	if (temp->next == temp)
		return (1);
	while (temp->next->index != 0)
	{
		if (temp->next->value < temp->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	ft_reverse_order_three(t_ps **list_a, t_ps **list_b)
{
	ft_pb(list_a, list_b);
	ft_sa(list_a);
	ft_pa(list_a, list_b);
	ft_rra(list_a);
}

int	ft_size_list(t_ps **list)
{
	int	i;
	t_ps	*temp;

	if (!list || !*list)
		return (0);
	i = 0;
	temp = *list;
	while (temp->next->index != 0)
	{
		temp = temp->next;
		i++;
	}
	return i + 1;
}

void	ft_sort_three(t_ps **list_a, t_ps **list_b)
{
	if (!list_a || !*list_a || !list_b || ft_is_sorted(list_a) || ft_size_list(list_a) != 3)
		return ;
	if (ft_is_reverse_sorted(list_a))
	{
		ft_reverse_order_three(list_a, list_b);
		return ;
	}
	if ((*list_a)->value < (*list_a)->next->value && (*list_a)->value > (*list_a)->previous->value)
	{
		ft_ra(list_a);
		ft_ra(list_a);
	}
}

void	ft_sort(t_ps **list_a, t_ps **list_b)
{
	if (!list_a || !list_b || !*list_a)
		return ;
	if (ft_is_sorted(list_a))
		return ;
	if (ft_is_reverse_sorted(list_a))
	{
		ft_reverse_order(list_a, list_b);
		return ;
	}
	while ((*list_a)->previous->index != 2 && (*list_a))
		ft_pb(list_a, list_b);
	ft_sort_three(list_a, list_b);
	ft_cost(list_a, list_b);
}
