/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:22:42 by nhan              #+#    #+#             */
/*   Updated: 2024/03/02 23:32:23 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

//# define malloc(size) ft_malloc_null_tester(size) 

typedef struct s_ps
{
	int			value;
	int			index;
	struct s_ps	*next;
	struct s_ps	*previous;
}	t_ps;

void	ft_display_ps(t_ps *ps);
void	ft_display_ps_list_reverse(t_ps *list);
void	ft_display_ps_list(t_ps *list);
void	*ft_malloc_null_tester(size_t size);
t_ps	*ft_add_ps(t_ps **first, t_ps *new);
t_ps	*ft_linked_list_constructor(char **str, int len);
t_ps	*ft_new_ps(int n);
t_ps	*ft_free_ps_list(t_ps **list);
t_ps	*ft_sa(t_ps *list);
int		ft_is_tab_of_number(char **str, int len);
#endif
