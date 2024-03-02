/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:26:17 by nhan              #+#    #+#             */
/*   Updated: 2024/03/02 16:13:33 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error()
{	
	ft_printf("Error\n");
	return (1);
}


int	ft_check_input(int argc, char **argv)
{
	if (argv == NULL || argc < 2)
		return (0);
	if (!ft_is_tab_of_number(argv + 1, argc - 1))
		return (0);
	return (1);
}

int	ft_duplicate(t_ps s)
{
	int	first = s.index;
	int	last = (s.previous)->index;

	printf("\nstart = %d ---- end = %d\n", first, last);
	return (0);
}

int	main(int argc, char **argv)
{
	t_ps	*list_a;

	list_a = NULL;
	if (!ft_check_input(argc, argv))
		return (ft_error());
	list_a = ft_linked_list_constructor(argv + 1, argc - 1);
	ft_duplicate(*list_a);
	if (!list_a)
		return (ft_error());
	ft_display_ps_list(list_a);
	ft_free_ps_list(&list_a);
	return (0);
}
