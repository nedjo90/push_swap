/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_to_target_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:13:49 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:58:29 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate_to_target_b(t_ps **list_b, t_ps *target)
{
	while ((*list_b) != target)
	{
		if (target->index >= (*list_b)->mediane)
			ft_rrb(list_b);
		else
			ft_rb(list_b);
	}
}
