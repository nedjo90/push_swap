/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_is_only_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:13:36 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 13:15:49 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_argv_is_only_numbers(const int size, char **input)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (!ft_is_number(input[i]))
			return (0);
		i++;
	}
	return (1);
}
