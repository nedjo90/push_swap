/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:16:36 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:36:46 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_swap(t_ps **list)
{
	if (list == NULL || *list == NULL || (*list)->next == (*list))
		return (0);
	if ((*list)->next->next == (*list))
	{
		(*list) = (*list)->next;
		ft_update_struct_data(*list);
		return (1);
	}
	(*list)->next->prev = (*list)->prev;
	(*list)->prev->next = (*list)->next;
	(*list)->next->next->prev = (*list);
	(*list)->prev = (*list)->next;
	(*list)->next = (*list)->next->next;
	(*list)->prev->next = (*list);
	(*list) = (*list)->prev;
	ft_update_struct_data(*list);
	return (1);
}
