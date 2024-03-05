/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:02:10 by nhan              #+#    #+#             */
/*   Updated: 2024/03/05 11:03:18 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size_list(t_ps **list)
{
	int	i;
	t_ps	*temp;

	if (!list || !*list)
		return (0);
	i = 0;
	temp = *list;
	while (temp->next->index != 0)
	{
		temp = temp->next;
		i++;
	}
	return i + 1;
}
