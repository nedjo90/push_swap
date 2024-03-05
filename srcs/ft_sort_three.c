/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:03:35 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 11:36:09 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_order_three(t_ps **list_a, t_ps **list_b)
{
	if (!*list_b || !list_b || (*list_b)->previous->index < 1)
	{
		ft_rra(list_a);
		ft_sa(list_a);
	}
	else
	{
		ft_rra(list_a);
		ft_sa(list_a);
	}
}

void	ft_sort_three(t_ps **list_a, t_ps **list_b)
{
	if (!list_a || !*list_a || ft_size_list(list_a) != 3)
		return ;
	if (ft_is_reverse_sorted(list_a))
		ft_reverse_order_three(list_a, list_b);
}
