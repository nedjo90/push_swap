/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_optimization.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:11:17 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:54:50 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_five_optimization(t_ps **list_a, t_ps **list_b)
{
	while ((*list_a)->count > 3)
	{
		ft_rotate_to_target_a(list_a, (*list_a)->min);
		ft_pb(list_a, list_b);
	}
}
