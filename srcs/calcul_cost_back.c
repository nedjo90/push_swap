/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_cost_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:28:15 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 00:35:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*calcul_cost_back(t_ps *list_a, t_ps *list_b)
{
	t_ps	*head;
	t_ps	*min_cost;

	head = list_b;
	cost_in_back(list_b, list_a);
	min_cost = list_b;
	list_b = list_b->next;
	while (list_b != head)
	{
		cost_in_back(list_b, list_a);
		if (list_b->cost_in < min_cost->cost_in)
			min_cost = list_b;
		list_b = list_b->next;
	}
	return (min_cost);
}
