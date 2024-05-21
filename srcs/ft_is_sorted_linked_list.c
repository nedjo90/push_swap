/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted_linked_list.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:11:52 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 00:21:27 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_sorted_linked_list(t_ps *list)
{
	t_ps	*head;

	head = list->head;
	list = list->next;
	while (list != head)
	{
		if (list->value < list->prev->value)
		{
			return (0);
		}
		list = list->next;
	}
	return (1);
}
