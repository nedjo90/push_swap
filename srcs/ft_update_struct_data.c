/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_struct_data.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:16:48 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 00:00:35 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	nulling_data(t_ps *list)
{
	list->count = 1;
	list->head = NULL;
	list->max = NULL;
	list->min = NULL;
}

static void	calcul_cost(t_ps *list)
{
	t_ps	*head;
	int		i;

	head = list;
	if (head->count % 2 == 0)
		head->mediane = head->count / 2;
	else
		head->mediane = head->count / 2 + 1;
	head->cost = 0;
	head->index = 0;
	i = 1;
	list = list->next;
	while (list->head == NULL)
	{
		if (i < head->mediane)
			list->cost = i;
		else
			list->cost = head->count - i;
		list->index = i;
		list = list->next;
		i++;
	}
}

void	ft_update_struct_data(t_ps *list)
{
	t_ps	*head;

	head = list;
	list->head = head;
	list->max = list;
	list->min = list;
	head->count = 1;
	list = list->next;
	while (list != head)
	{
		nulling_data(list);
		if (list->value > head->max->value)
			head->max = list;
		if (list->value < head->min->value)
			head->min = list;
		head->count++;
		list = list->next;
	}
	calcul_cost(list);
}
