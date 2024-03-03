/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ps_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:52:38 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 18:41:57 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps_list(t_ps **list)
{

	if (!list || !*list)
		return ;
	ft_printf("\n******************** list ******************************\n");
	while ((*list)->next->index != 0)
	{
		ft_display_ps(list);
		(*list) = (*list)->next;
	}
	ft_display_ps(list);
	(*list) = (*list)->next;
	ft_printf("\n******************** list ******************************\n");
}
