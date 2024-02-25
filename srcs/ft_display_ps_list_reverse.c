/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ps_list_reverse.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:49:06 by nhan              #+#    #+#             */
/*   Updated: 2024/02/25 12:13:16 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps_list_reverse(t_ps *list)
{
	t_ps	tracker;

	ft_printf("************************ reverse list ********************\n");
	tracker = *(list->previous);
	while (tracker.index != 0)
	{
		ft_display_ps(&tracker);
		tracker = *(tracker.previous);
	}
	ft_display_ps(&tracker);
	ft_printf("************************ reverse list ********************\n");
}
