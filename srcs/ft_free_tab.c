/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:28:15 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 14:51:02 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		free(tab[i++]);
	free(tab);
}
