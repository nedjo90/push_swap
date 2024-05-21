/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_linked_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:09:41 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 13:13:18 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*ft_add_to_linked_list(t_ps *list, t_ps *item)
{
	if (item == NULL)
		return (ft_free_list(list));
	if (list == NULL)
		list = item;
	else
	{
		item->next = list;
		item->prev = list->prev;
		list->prev->next = item;
		list->prev = item;
	}
	return (list);
}
