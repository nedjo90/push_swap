/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ps_list_reverse.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:49:06 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 18:38:54 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps_list_reverse(t_ps **list)
{

	ft_printf("************************ reverse list ********************\n");
	(*list) = (*list)->previous;
	while ((*list)->index != 0)
	{
		ft_display_ps(list);
		(*list) = (*list)->previous;
	}
	ft_display_ps(list);
	ft_printf("************************ reverse list ********************\n");
}
