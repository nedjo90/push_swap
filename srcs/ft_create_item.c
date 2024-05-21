/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_item.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:16:09 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 13:25:17 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*ft_create_item(const long input)
{
	t_ps	*item;

	item = malloc(sizeof(t_ps));
	if (item == NULL)
		return (NULL);
	item->value = input;
	item->count = 1;
	item->cost = 0;
	item->cost_in = 0;
	item->best = NULL;
	item->head = item;
	item->max = item;
	item->min = item;
	item->next = item;
	item->prev = item;
	return (item);
}
