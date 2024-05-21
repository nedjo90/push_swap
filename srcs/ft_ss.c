/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:16:24 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:27:52 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ss(t_ps **list_a, t_ps **list_b)
{
	if (list_a == NULL
		|| *list_a == NULL
		|| (*list_a)->next == (*list_a)
		|| list_b == NULL
		|| *list_b == NULL
		|| (*list_b)->next == (*list_b))
		return ;
	ft_swap(list_a);
	ft_swap(list_b);
	write(1, "ss\n", 3);
}
