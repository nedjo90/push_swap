/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:21:03 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 23:18:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb_or_rrr(t_ps *min, t_ps **list_a, t_ps **list_b)
{
	if (!list_b || !*list_b || !list_a || !*list_a)
		return ;
	if (min->cost_push > ft_size_list(list_a) / 2)
	{
		while ((*list_b) != min && min->cost_push != 0)
		{
			min->cost_push--;
			ft_rrr(list_a, list_b);
		}
		while (min->cost_push != 0)
		{
			min->cost_push--;
			ft_rra(list_a);
		}
	}
	else
	{
		while (min->cost_push != 0)
		{
			min->cost_push--;
			ft_ra(list_a);
		}	
	}
	while ((*list_b) != min)
		ft_rrb(list_b);
}

void	ft_rb_or_rr(t_ps *min, t_ps **list_a, t_ps **list_b)
{
	if (!list_b || !*list_b || !list_a || !*list_a)
		return ;
	if (min->cost_push > ft_size_list(list_a) / 2)
	{
		while ((*list_b) != min && min->cost_push != 0)
		{
			min->cost_push--;
			ft_rr(list_a, list_b);
		}
		while (min->cost_push != 0)
		{
			min->cost_push--;
			ft_ra(list_a);
		}
	}
	else
	{
		while (min->cost_push != 0)
		{
			min->cost_push--;
			ft_rra(list_a);
		}
	}
	while ((*list_b) != min)
		ft_rb(list_b);
}
void	ft_turn_list(t_ps *min, t_ps **list_a, t_ps **list_b)
{
	if (!min || !list_b || !*list_b)
		return ;
	if(min->cost > ft_size_list(list_b) / 2)
	{
		ft_rrb_or_rrr(min, list_a, list_b);
	}
	else
	{
		ft_rb_or_rr(min, list_a, list_b);
	}
	ft_pa(list_a, list_b);
}

void	ft_sort(t_ps **list_a, t_ps **list_b)
{
	t_ps	*min;

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
	ft_sort_three(list_a);
	min = ft_cost(list_a, list_b);
	while (min)
	{
		min = ft_cost(list_a, list_b);
//		ft_printf("\n\n\n\n\n");
//		ft_display_control(list_a, list_b);
//		ft_printf("\nOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
//		ft_display_ps(&min);
//		ft_printf("\nOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n");
		ft_turn_list(min,list_a, list_b);
//		ft_display_control(list_a, list_b);
//		ft_printf("\n\n\n\n\n");
	}
	while ((*list_a)->expected_index != 0)
	{
		ft_ra(list_a);
	}
}
