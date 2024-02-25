/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_constructor.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:31:13 by nhan              #+#    #+#             */
/*   Updated: 2024/02/25 10:55:19 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_ps(t_ps *ps)
{
	ft_printf("Index = %d -> Value = %d |\033[0;31m P = %p\033[0;32m A = %p\033[0;33m N = %p\033[0m\n", ps->index, ps->value, ps->previous, ps, ps->next);
}

void	ft_display_ps_list_reverse(t_ps **list)
{
	ft_printf("******************************************************** reverse result *****************************************************************\n");
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	(*list) = (*list)->previous;
	ft_display_ps(*list);
	
	// while (list)
	// {
	// 	ft_display_ps((*list));
	// 	(*list) = (*list)->previous;
	// 	if ((*list)->previous->index != 0)
	// 	{
	// 		ft_display_ps((*list));
	// 		break;
	// 	}
	// }
}

void	ft_display_ps_list(t_ps **list)
{
	t_ps *tracker;

	tracker = *list;
	ft_printf("******************************************************** result *************************************************************************\n");
	if (tracker->next->index == 0)
	{
		ft_display_ps(tracker);
		return;
	}
	while (list)
	{
		ft_display_ps(tracker);
		if (tracker->next->index == 0)
			break;
		tracker = tracker->next;
	}
}

t_ps	*ft_new_ps(int n)
{
	t_ps	*new;

	new = malloc(sizeof(t_ps));
	if (!new)
		return NULL;
	new->value = n;
	new->index = 0;
	new->next = new;
	new->previous = new;
	return (new);
}

void	ft_add_ps(t_ps **first, t_ps *new)
{
	ft_printf("address first : %p ------ address new %p\n", *first, new);
	//ft_display_ps(new);
	if (*first == NULL)
	{
		//ft_printf("ok");
		*first = new;
	}
	else
	{
		//ft_printf("okok");
		new->next = (*first);
		ft_printf("\tnew->next = %p \n", new->next);
		if ((*first)->previous->index == 0)
		{
			new->previous = *first;
			ft_printf("\tnew->previous = %p\n", new->previous);
			new->index = 1;
			new->next->next = new;
			ft_printf("\t(*first)->next = %p\n", (*first)->next);
		}
		else
		{
			new->previous = (*first)->previous;
			ft_printf("\tnew->previous = %p\n", new->previous);
			new->index = (*first)->previous->index + 1;
			(*first)->previous->next = new;
			ft_printf("\t(*first)->previous->next = %p\n", (*first)->previous->next);
		}
		(*first)->previous = new;
		ft_printf("\t(*first)->previous = %p\n", (*first)->previous);
	}
	ft_printf("\t\t\t\t\t\tnew => ");
	ft_display_ps(new);
	ft_printf("\n");
	ft_printf("\t\t\t\t\t\tfirst => ");
	ft_display_ps(*first);
	ft_printf("\n");
}

t_ps	*ft_linked_list_constructor(char **str, int len)
{
	int			i;
	int			number;
	t_ps	*list;

	if (!len || !str)
		return (NULL);
	list = NULL;
	ft_printf("address list at the start: %p\n", list);
	i = 0;
	while (i < len)
	{
		number = ft_atoi(str[i]);
		ft_printf("****************************************************************************************************************************************\n");
		ft_add_ps(&list, ft_new_ps(number));
		ft_printf("****************************************************************************************************************************************\n");
		i++;
	}
	ft_display_ps(list);
	ft_display_ps_list(&list);
	ft_printf("======================================================================================================================\n");
	ft_printf("previous: ");
	ft_display_ps(list->previous);
	ft_printf("start: ");
	ft_display_ps(list);
	ft_printf("next: ");
	ft_display_ps(list->next);
	ft_printf("======================================================================================================================\n");
	ft_display_ps_list_reverse(&list);
	return (list);
}
