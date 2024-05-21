/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:11:25 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 00:25:18 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_ps	*ft_free_list(t_ps *list)
{
	t_ps	*last;
	t_ps	*temp;

	if (list != NULL)
	{
		last = list->prev;
		while (list != last)
		{
			temp = list->next;
			free(list);
			list = temp;
		}
		free(list);
	}
	return (NULL);
}
