/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_ps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:26:11 by nhan              #+#    #+#             */
/*   Updated: 2024/02/25 13:52:39 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*ft_new_ps(int n)
{
	t_ps	*new;

	new = malloc(sizeof(t_ps));
	if (!new)
		return (NULL);
	new->value = n;
	new->index = 0;
	new->next = new;
	new->previous = new;
	return (new);
}
