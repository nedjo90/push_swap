/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_linked_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:15:41 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 15:00:43 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*ft_sort_linked_list(t_ps **list_a, t_ps **list_b)
{
	if ((*list_a)->count == 2)
		return (ft_sort_two(list_a));
	if ((*list_a)->count == 3)
		return (ft_sort_three(list_a));
	return (ft_sort_more(list_a, list_b));
}
