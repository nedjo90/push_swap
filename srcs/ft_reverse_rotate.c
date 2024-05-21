/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:13:23 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:59:21 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_reverse_rotate(t_ps **list)
{
	if (list == NULL || *list == NULL || (*list)->prev == *list)
		return (0);
	*list = (*list)->prev;
	ft_update_struct_data(*list);
	return (1);
}
