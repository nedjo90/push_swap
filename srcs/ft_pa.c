/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 00:12:37 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 00:54:08 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_ps **list_a, t_ps **list_b)
{
	t_ps	*ps_push;

	if (!list_b || !*list_b || !list_a)
		return ;
	ps_push = ft_del_first(list_b);
	ft_add_front(list_a, ps_push);
	write(1, "pa\n", 3);
}
