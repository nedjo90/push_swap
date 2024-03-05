/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:03:35 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 23:10:04 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_ps **list_a)
{
	if (!list_a || !*list_a || ft_size_list(list_a) != 3 || ft_is_sorted(list_a))
		return ;
	if ((*list_a)-> value < (*list_a)->previous->value\
	&& (*list_a)-> value < (*list_a)->next->value\
	&& (*list_a)->next->value > (*list_a)->previous->value)
		ft_sa(list_a);
	else if ((*list_a)-> value > (*list_a)->previous->value\
	&& (*list_a)-> value > (*list_a)->next->value\
	&& (*list_a)->previous->value < (*list_a)->next->value)
	{
		ft_ra(list_a);
		ft_sa(list_a);
	}
	else if ((*list_a)->value > (*list_a)->next->value\
	&& (*list_a)->value < (*list_a)->previous->value\
	&& (*list_a)->previous->value > (*list_a)->next->value)
		ft_sa(list_a);
}

