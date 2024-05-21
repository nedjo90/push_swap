/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:11:36 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 15:01:58 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_number(const char *input)
{
	int	i;

	i = 0;
	if (input == NULL)
		return (0);
	while (input[i])
	{
		if (i == 0 && input[i] == '-')
			i++;
		if (!ft_isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}
