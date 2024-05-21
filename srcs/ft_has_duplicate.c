/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:28:15 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 01:09:04 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_one(t_ps *list)
{
	t_ps	*curr;

	if (list == NULL)
		return (1);
	curr = list;
	list = list->next;
	while (list != curr)
	{
		if (list->value == curr->value)
			return (1);
		list = list->next;
	}
	return (0);
}

int	ft_has_duplicate(t_ps *list)
{
	t_ps	*head;

	if (list == NULL)
		return (1);
	head = list;
	if (check_one(list))
		return (1);
	list = list->next;
	while (list != head)
	{
		if (check_one(list))
			return (1);
		list = list->next;
	}
	return (0);
}
