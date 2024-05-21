/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:28:15 by nhan              #+#    #+#             */
/*   Updated: 2024/05/21 16:45:20 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(const int argc, char **argv)
{
	t_ps	*list_a;
	t_ps	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (argc == 1 || (argc == 2 && ft_strlen(argv[1]) == 0))
		return (0);
	list_a = ft_create_linked_list(argc, argv);
	if (list_a == NULL)
		return (ft_error());
	if (!ft_is_sorted_linked_list(list_a))
	{
		ft_sort_linked_list(&list_a, &list_b);
		if (list_b != NULL || !ft_is_sorted_linked_list(list_a))
		{
			ft_free_list(list_a);
			ft_free_list(list_b);
			return (ft_error());
		}
	}
	ft_free_list(list_a);
	return (0);
}
