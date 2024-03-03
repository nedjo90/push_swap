/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 02:21:46 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 02:23:10 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_ps **list_a, t_ps **list_b)
{
	if (*list_a && *list_b)
	{
		ft_reverse_rotate(list_a);
		ft_reverse_rotate(list_b);
		write(1, "rrr\n", 4);
	}
}
