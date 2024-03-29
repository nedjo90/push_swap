/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_constructor.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:31:13 by nhan              #+#    #+#             */
/*   Updated: 2024/02/25 12:43:30 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*ft_linked_list_constructor(char **str, int len)
{
	int			i;
	int			number;
	t_ps		*list;

	if (!len || !str)
		return (NULL);
	list = NULL;
	i = 0;
	while (i < len)
	{
		if (!str[i])
			return (ft_free_ps_list(&list));
		number = ft_atoi(str[i]);
		if (ft_add_ps(&list, ft_new_ps(number)) == NULL)
			return (NULL);
		i++;
	}
	return (list);
}
