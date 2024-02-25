/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_ps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:55:49 by nhan              #+#    #+#             */
/*   Updated: 2024/02/25 12:39:56 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*ft_add_ps(t_ps **first, t_ps *new)
{
	if (new == NULL)
		return (ft_free_ps_list(first));
	if (*first == NULL)
		*first = new;
	else
	{
		new->next = (*first);
		if ((*first)->previous->index == 0)
		{
			new->previous = *first;
			new->index = 1;
			new->next->next = new;
		}
		else
		{
			new->previous = (*first)->previous;
			new->index = (*first)->previous->index + 1;
			(*first)->previous->next = new;
		}
		(*first)->previous = new;
	}
	return (new->next);
}
