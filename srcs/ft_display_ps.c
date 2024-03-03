/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:42:43 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 01:05:34 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps(t_ps *ps)
{
	if (ps == NULL)
		return ;
	ft_printf("Index = %d\t\t", ps->index);
	ft_printf("Value = %d\t\t", ps->value);
	ft_printf("|\033[0;31m P = %p\t\t", ps->previous);
	ft_printf("\033[0;32m A = %p\t\t", ps);
	ft_printf("\033[0;33m N = %p\033[0m\n", ps->next);
}
