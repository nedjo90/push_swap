/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_constructor.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:31:13 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 17:39:21 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	ft_new_ps(int n)
{
	t_ps	new;

	new.value = n;
	new.index = 0;
	new.next = &new;
	new.previous = &new;
	return (new);
}

void	ft_add_back_ps(t_ps **list, t_ps new)
{
	if (*list == NULL)
	{
		*list = &new;
		return ;
	}
	new.index = (*list)->previous->index + 1;
	new.next = *list;
	new.previous = (*list)->previous;
	(*list)->previous->next = &new;
	(*list)->previous = &new;
	
}

void	ft_display_ps(t_ps *list)
{
	t_ps	*current = list;
	while (current != NULL)
	{
		ft_printf("Index = %d -> Value = %d\n", current->index, current->value);
		current = current->next;
		if (current == list)
			break;
	}
}

t_ps	*ft_linked_list_constructor(char **str, int len)
{
	int			i;
	int			number;
	t_ps	*list;
	t_ps	new_ps;

	if (!len || !str)
		return (NULL);
	list = NULL;
	i = 0;
	while (i < len)
	{
		number = ft_atoi(str[i]);
		new_ps = ft_new_ps(number);
		ft_add_back_ps(&list, new_ps);
		i++;
	}
	ft_display_ps(list);
	return (list);
}
