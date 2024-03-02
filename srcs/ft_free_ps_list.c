/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_ps_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:34:17 by nhan              #+#    #+#             */
/*   Updated: 2024/03/02 12:05:41 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*ft_free_ps_list(t_ps **list)
{
	int		last_index;
	t_ps	*temp;

	if (!list || !(*list))
		return (NULL);
	last_index = (*list)->previous->index;
	temp = (*list);
	while (temp->index != last_index)
	{
		temp = (*list)->next;
		free((*list));
		*list = temp;
	}
	free((*list));
	return (NULL);
}
