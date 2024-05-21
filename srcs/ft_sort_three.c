/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:16:00 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 00:26:20 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*ft_sort_three(t_ps **list)
{
	if ((*list)->max == *list)
		ft_ra(list);
	else if ((*list)->max == (*list)->next)
		ft_rra(list);
	if ((*list)->value > (*list)->next->value)
		ft_sa(list);
	return (*list);
}
