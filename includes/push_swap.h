/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:22:42 by nhan              #+#    #+#             */
/*   Updated: 2024/03/04 15:37:53 by nhan             ###   ########.fr       */
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
	int			expected_index;
	int			cost;
	struct s_ps	*next;
	struct s_ps	*previous;
}	t_ps;

void	ft_display_ps(t_ps **ps);
void	ft_display_ps_list_reverse(t_ps **list);
void	ft_display_ps_list(t_ps **list);
void	*ft_malloc_null_tester(size_t size);
t_ps	*ft_add_ps(t_ps **first, t_ps *new);
t_ps	*ft_linked_list_constructor(char **str, int len);
t_ps	*ft_new_ps(int n);
t_ps	*ft_free_ps_list(t_ps **list);
t_ps	*ft_del_first(t_ps **list);
void	ft_swap_head(t_ps **list);
void	ft_sa(t_ps **list_a);
void	ft_sb(t_ps **list_b);
void	ft_ss(t_ps **list_a, t_ps **list_b);
void	ft_pb(t_ps **list_a, t_ps **list_b);
void	ft_pa(t_ps **list_a, t_ps **list_b);
void	ft_add_front(t_ps **list, t_ps *ps);
void	ft_rotate(t_ps **list);
void	ft_reverse_rotate(t_ps **list);
void	ft_ra(t_ps **list_a);
void	ft_rb(t_ps **list_b);
void	ft_rra(t_ps **list_a);
void	ft_rrb(t_ps **list_b);
void	ft_rr(t_ps **list_a, t_ps **list_b);
void	ft_rrr(t_ps **list_a, t_ps **list_b);
void	ft_sort(t_ps **list_a, t_ps **list_b);
void	ft_display_control(t_ps **list_a, t_ps **list_b);
void	ft_cost(t_ps **list_a, t_ps **list_b);
int		ft_indexer(t_ps **list);
int		ft_is_tab_of_number(char **str, int len);
#endif
