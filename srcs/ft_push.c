/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:12:44 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:35:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_push(t_ps **src, t_ps **dst)
{
	t_ps	*item;

	if (src == NULL || (*src) == NULL)
		return (0);
	item = *src;
	if ((*src)->next != (*src))
	{
		(*src)->next->prev = (*src)->prev;
		(*src)->prev->next = (*src)->next;
		(*src) = (*src)->next;
		ft_update_struct_data(*src);
	}
	else
	{
		(*src) = NULL;
		src = NULL;
	}
	item->next = item;
	item->prev = item;
	*dst = ft_add_front_to_linked_list(*dst, item);
	ft_update_struct_data(*dst);
	return (1);
}
