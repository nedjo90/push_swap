/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:39:30 by nhan              #+#    #+#             */
/*   Updated: 2024/03/16 17:32:35 by nhan             ###   ########.fr       */
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

void	ft_complex_sort(t_ps **list_a, t_ps **list_b)
{
	while (ft_size_list(list_a) > 2)
	{
		ft_display_control(list_a, list_b);
		ft_cost(list_a, list_b);
		ft_pb(list_a, list_b);
//		if (ft_size_list(list_b) == 3)
//			ft_sort_three(list_b);
	}
	/*
	while ((*list_a)->expected_index != 0)
	{
		ft_ra(list_a);
	}*/
}
