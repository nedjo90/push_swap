/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_linked_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:28:15 by nhan              #+#    #+#             */
/*   Updated: 2024/05/24 14:45:31 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_ps	*populate(int start, const int size, char **input)
{
	t_ps	*list;
	t_ps	*item;

	list = NULL;
	if (input == NULL || !ft_argv_is_only_numbers(size, input))
		return (list);
	while (start < size)
	{
		if (ft_strlen(input[start]) > 11)
			return (ft_free_list(list));
		item = ft_create_item(ft_atol(input[start]));
		list = ft_add_to_linked_list(list, item);
		if (list == NULL)
			return (ft_free_list(list));
		start++;
	}
	return (list);
}

static t_ps	*populate_string(char **input)
{
	char		**tab;
	t_ps		*list;
	int			i;

	i = 0;
	list = NULL;
	tab = ft_split(*input, ' ');
	while (tab[i] != NULL)
	{
		if (!ft_is_number(tab[i]))
		{
			ft_free_tab(tab);
			return (list);
		}
		i++;
	}
	list = populate(0, i, tab);
	ft_free_tab(tab);
	return (list);
}

static int	ft_is_out_of_int(t_ps *list)
{
	t_ps	*head;
	long	min;
	long	max;

	min = -2147483648;
	max = 2147483647;
	if (list == NULL)
		return (0);
	head = list;
	if (list->value > max)
		return (1);
	if (list->value < min)
		return (1);
	list = list->next;
	while (list != head)
	{
		if (list->value > max)
			return (1);
		if (list->value < min)
			return (1);
		list = list->next;
	}
	return (0);
}

t_ps	*ft_create_linked_list(const int size, char **input)
{
	t_ps	*list;

	if (input == NULL || size < 2)
		return (NULL);
	if (size == 2)
		list = populate_string(input + 1);
	else
		list = populate(1, size, input);
	if (ft_is_out_of_int(list))
		return (ft_free_list(list));
	if (ft_has_duplicate(list))
		return (ft_free_list(list));
	if (list != NULL)
		ft_update_struct_data(list);
	return (list);
}
