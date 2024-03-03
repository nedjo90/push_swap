/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 00:36:19 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 00:46:11 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_ps **list_a, t_ps **list_b)
{
	t_ps	*ps_push;

	if (!list_a || !*list_a || !list_b)
		return ;
	ps_push = ft_del_first(list_a);
	ft_add_front(list_b, ps_push);
	write(1, "pb\n", 3);
}
