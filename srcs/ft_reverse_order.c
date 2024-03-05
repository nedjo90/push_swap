/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_order.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:10:41 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 11:11:09 by nhan             ###   ########.fr       */
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
