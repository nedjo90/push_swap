/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:42:43 by nhan              #+#    #+#             */
/*   Updated: 2024/03/16 17:23:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps(t_ps **ps)
{
	if (!ps || !*ps)
		return ;
	ft_printf("Index = %d\t\t", (*ps)->index);
	ft_printf("exp_index = %d\t\t", (*ps)->expected_index);
	ft_printf("cost = %d  ", (*ps)->cost);
	ft_printf("cost_push = %d\t", (*ps)->cost_push);
	ft_printf("total cost = %d\t\t", (*ps)->cost_push + (*ps)->cost);
	ft_printf("Value = %d\n", (*ps)->value);
/*	ft_printf("|\033[0;31m P = %p\t\t", (*ps)->previous);
	ft_printf("\033[0;32m A = %p\t\t", *ps);
	ft_printf("\033[0;33m N = %p\033[0m\n", (*ps)->next);
*/}
