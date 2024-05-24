/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:15:50 by nhan              #+#    #+#             */
/*   Updated: 2024/05/23 23:08:00 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sorted_with_rotation(t_ps *list)
{
	t_ps	*min;

	min = list->min;
	list = min;
	if (list->value > list->next->value)
		return (0);
	while (list->next != min)
	{
		if (list->value > list->next->value)
			return (0);
		list = list->next;
	}
	return (1);
}

t_ps	*ft_sort_more(t_ps **list_a, t_ps **list_b)
{
	if ((*list_a)->count == 5)
		ft_five_optimization(list_a, list_b);
	else
	{
		while ((*list_a)->count > 3 && !ft_is_sorted_linked_list(*list_a))
			ft_pb(list_a, list_b);
	}
	if ((*list_a)->count == 3)
		ft_sort_three(list_a);
	while (*list_b != NULL)
	{
		ft_move_from_b_to_a(list_a, list_b);
	}
	ft_rotate_to_target_a(list_a, (*list_a)->min);
	return (*list_a);
}
