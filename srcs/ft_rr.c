/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:14:46 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:30:24 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rr(t_ps **list_a, t_ps **list_b)
{
	if (list_a == NULL
		|| *list_a == NULL
		|| (*list_a)->next == *list_a
		|| list_b == NULL
		|| *list_b == NULL
		|| (*list_b)->next == *list_b)
		return ;
	ft_rotate(list_a);
	ft_rotate(list_b);
	write(1, "rr\n", 3);
}
