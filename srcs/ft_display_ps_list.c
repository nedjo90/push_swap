/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ps_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:52:38 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 20:16:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps_list(t_ps **list)
{

	if (!list || !*list)
		return ;
	while ((*list)->next->index != 0)
	{
		ft_display_ps(list);
		(*list) = (*list)->next;
	}
	ft_display_ps(list);
	(*list) = (*list)->next;
}
