/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:21:03 by nhan              #+#    #+#             */
/*   Updated: 2024/03/16 16:39:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_ps **list_a, t_ps **list_b)
{
	if (!list_a || !list_b || !*list_a)
		return ;
	if (ft_is_sorted(list_a) || (*list_a)->next == &(**list_a))
		return ;
	if (ft_size_list(list_a) == 3)
	{
		ft_sort_three(list_a);
		return ;
	}
	ft_complex_sort(list_a, list_b);
}
