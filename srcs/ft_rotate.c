/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:13:34 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:55:41 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rotate(t_ps **list)
{
	if (list == NULL || *list == NULL || (*list)->next == *list)
		return (0);
	(*list) = (*list)->next;
	ft_update_struct_data(*list);
	return (1);
}
