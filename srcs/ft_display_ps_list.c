/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ps_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:52:38 by nhan              #+#    #+#             */
/*   Updated: 2024/02/25 11:59:28 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps_list(t_ps *list)
{
	t_ps	tracker;

	ft_printf("************************ list ********************\n");
	tracker = *list;
	ft_display_ps(&tracker);
	tracker = *(tracker.next);
	while (tracker.index != 0)
	{
		ft_display_ps(&tracker);
		tracker = *(tracker.next);
	}
	ft_printf("************************ list ********************\n");
}
