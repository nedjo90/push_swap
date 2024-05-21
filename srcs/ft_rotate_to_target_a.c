/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_to_target_a.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:13:43 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:57:17 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate_to_target_a(t_ps **list_a, t_ps *target)
{
	while ((*list_a) != target)
	{
		if (target->index >= (*list_a)->mediane)
			ft_rra(list_a);
		else
			ft_ra(list_a);
	}
}
