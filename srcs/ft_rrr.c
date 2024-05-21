/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:59 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 15:02:36 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rrr(t_ps **list_a, t_ps **list_b)
{
	if (list_a == NULL
		|| *list_a == NULL
		|| (*list_a)->prev == *list_a
		|| list_b == NULL
		|| *list_b == NULL
		|| (*list_b)->prev == *list_b)
		return ;
	ft_reverse_rotate(list_a);
	ft_reverse_rotate(list_b);
	write(1, "rrr\n", 4);
}
