/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_reverse_sorted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:11:25 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 11:11:48 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_reverse_sorted(t_ps **list)
{
	t_ps	*temp;

	temp = *list;
	if (temp->next == temp)
		return (1);
	while (temp->next->index != 0)
	{
		if (temp->next->value > temp->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}
