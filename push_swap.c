/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:26:17 by nhan              #+#    #+#             */
/*   Updated: 2024/03/16 17:28:56 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(void)
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
	t_ps	checking;

	while ((s.next)->index != 0)
	{
		checking = *(s.next);
		while (checking.index != 0)
		{
			if (s.value == checking.value)
			{
				ft_printf("double");
				return (1);
			}
			checking = *(checking.next);
		}
		s = *(s.next);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_ps	*list_a;
	t_ps	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (!ft_check_input(argc, argv))
		return (ft_error());
	list_a = ft_linked_list_constructor(argv + 1, argc - 1);
	if (!list_a || ft_duplicate(*list_a))
		return (ft_error());
	ft_indexer(&list_a);
//	ft_display_control(&list_a, &list_b);
	ft_sort(&list_a, &list_b);
//	ft_display_control(&list_a, &list_b);
/*	if (ft_is_sorted(&list_a))
		ft_printf("\n\n\n\n\n\n\n TRIER !!!!!!!!!!!!!!!!\n\n\n\n\n\n");
	else
	{		
		ft_printf("\n\n\n\n\n\n\n Loooooooooser\n\n\n\n\n\n");
	}
*/	ft_free_ps_list(&list_a);
	ft_free_ps_list(&list_b);
	return (0);
}
