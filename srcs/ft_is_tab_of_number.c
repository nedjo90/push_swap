/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tab_of_number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:25:45 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 15:27:51 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_tab_of_number(char **str, int len)
{
	int	i;
	int	j;

	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		j = 0;
		if (!str[i])
		{
			ft_printf("Error => NULL pointer in argv");
			return (0);
		}
		while (str[i][j])
		{
			if (ft_isdigit(str[i][j]) == 0)
			{
				int c = (int)str[i][j];
				ft_printf("Error %d - %d => \"%s\" : IS NOT DIGIT", ft_isdigit(str[i][j]), c, str[i]);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
