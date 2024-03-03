/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:20:23 by nhan              #+#    #+#             */
/*   Updated: 2024/03/03 17:46:12 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_partition(int *tab, int s, int e)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[e];
	i = s - 1;
	j = s;
	while (j <= e - 1)
	{
		if (tab[j] < pivot)
		{
			i++;
			ft_swap(&tab[i], & tab[j]);
		}
		j++;
	}
	ft_swap(&tab[i + 1], &tab[e]);
	return (i + 1);
}

void	ft_quicksort(int *tab, int s, int e)
{
	int	pivot;

	if (s < e)
	{
		pivot = ft_partition(tab, s, e);
		ft_quicksort(tab, s, pivot - 1);
		ft_quicksort(tab, pivot + 1, e);
	}
}

void	ft_expected_index(t_ps **list, int *tab)
{
	int	i;

	while ((*list)->next->index != 0)
	{
		i = 0;
		while (tab[i] != (*list)->value)
			i++;
		(*list)->expected_index = i;
		(*list) = (*list)->next;
	}
	i = 0;
	while (tab[i] != (*list)->value)
		i++;
	(*list)->expected_index = i;
	(*list) = (*list)->next;
}

int	ft_indexer(t_ps **list)
{
	int	i;
	int	*tab;

	i = 0;
	tab = (int *) malloc(sizeof(int) * ((*list)->previous->index  + 1));
	if (!tab)
		return (0);
	while ((*list)->next->index != 0)
	{
		tab[i] = (*list)->value;
		(*list) = (*list)->next;
		i++;
	}
	tab[i] = (*list)->value;
	(*list) = (*list)->next;
	ft_quicksort(tab, 0, (*list)->previous->index);
	ft_expected_index(list, tab);
	free(tab);
	return (1);
}
