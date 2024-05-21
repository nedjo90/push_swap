/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_from_b_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:12:07 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 00:16:54 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_move_one_cheapest(t_ps *cheap, t_ps **list_a, t_ps **list_b)
{
	if ((*list_a) != cheap->best)
	{
		if (cheap->best->index >= (*list_a)->mediane)
			ft_rra(list_a);
		else
			ft_ra(list_a);
	}
	if ((*list_b) != cheap)
	{
		if (cheap->index >= (*list_b)->mediane)
			ft_rrb(list_b);
		else
			ft_rb(list_b);
	}
}

void	ft_move_two_cheapest(t_ps *cheap, t_ps **list_a, t_ps **list_b)
{
	if (cheap->best->index > (*list_a)->mediane
		&& cheap->index > (*list_b)->mediane)
		ft_rrr(list_a, list_b);
	else if (cheap->best->index <= (*list_a)->mediane
		&& cheap->index <= (*list_b)->mediane)
		ft_rr(list_a, list_b);
}

void	ft_move_to_cheapest(t_ps *cheap, t_ps **list_a, t_ps **list_b)
{
	if ((*list_a) != cheap->best && (*list_b) != cheap
		&& ((cheap->best->index > (*list_a)->mediane
				&& cheap->index > (*list_b)->mediane)
			|| (cheap->best->index <= (*list_a)->mediane
				&& cheap->index <= (*list_b)->mediane)))
		ft_move_two_cheapest(cheap, list_a, list_b);
	else
		ft_move_one_cheapest(cheap, list_a, list_b);
}

void	ft_move_from_b_to_a(t_ps **list_a, t_ps **list_b)
{
	t_ps	*cheap;

	cheap = calcul_cost_back(*list_a, *list_b);
	ft_move_to_cheapest(cheap, list_a, list_b);
	if ((*list_a) == cheap->best && (*list_b) == cheap)
		ft_pa(list_a, list_b);
}
