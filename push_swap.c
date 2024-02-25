/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:26:17 by nhan              #+#    #+#             */
/*   Updated: 2024/02/25 15:10:20 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	*list_a;

	if (argv == NULL)
	{
		ft_printf("argv is NULL");
		return (1);
	}
	if (argc < 2)
	{
		ft_printf("please enter at least one number");
		return (1);
	}
	if (!ft_is_tab_of_number(argv + 1, argc - 1))
		return (1);
	list_a = ft_linked_list_constructor(argv + 1, argc - 1);
	if (!list_a)
	{
		ft_printf("Error");
		return (1);
	}
	//ft_display_ps_list(list_a);
	ft_free_ps_list(&list_a);

	return (0);
}
