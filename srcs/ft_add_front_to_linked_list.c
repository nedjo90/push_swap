/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:12:44 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:35:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*ft_add_front_to_linked_list(t_ps *list, t_ps *item)
{
	if (list == NULL)
		list = item;
	else
	{
		item->next = list;
		item->prev = list->prev;
		list->prev->next = item;
		list->prev = item;
	}
	return (item);
}
