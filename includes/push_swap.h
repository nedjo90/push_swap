/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:56:16 by nhan              #+#    #+#             */
/*   Updated: 2024/05/20 13:07:15 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

typedef struct s_ps
{
	long		value;
	long		count;
	long		mediane;
	long		cost;
	long		cost_in;
	long		index;
	struct s_ps	*best;
	struct s_ps	*head;
	struct s_ps	*max;
	struct s_ps	*min;
	struct s_ps	*next;
	struct s_ps	*prev;
}	t_ps;

int		ft_error(void);
int		ft_is_number(const char *input);
int		ft_argv_is_only_numbers(const int size, char **input);
int		ft_push(t_ps **src, t_ps **dst);
int		ft_swap(t_ps **list);
int		ft_reverse_rotate(t_ps **list);
int		ft_is_sorted_linked_list(t_ps *list);
int		ft_rotate(t_ps **list);
int		ft_has_duplicate(t_ps *list);
void	ft_display_linked_list(t_ps *list);
void	ft_display_congratulation_or_fail(char *message);
void	ft_sa(t_ps **list_a);
void	ft_sb(t_ps **list_b);
void	ft_ss(t_ps **list_a, t_ps **list_b);
void	ft_pb(t_ps **list_a, t_ps **list_b);
void	ft_pa(t_ps **list_a, t_ps **list_b);
void	ft_ra(t_ps **list_a);
void	ft_rb(t_ps **list_b);
void	ft_rr(t_ps **list_a, t_ps **list_b);
void	ft_rra(t_ps **list_a);
void	ft_rrb(t_ps **list_b);
void	ft_rrr(t_ps **list_a, t_ps **list_b);
void	ft_transfert_struct_data(t_ps *src, t_ps *dst, const int add_count);
void	ft_move_from_b_to_a(t_ps **list_a, t_ps **list_b);
void	ft_move_from_a_to_b(t_ps **list_a, t_ps **list_b);
void	ft_update_struct_data(t_ps *list);
void	ft_five_optimization(t_ps **list_a, t_ps **list_b);
void	ft_rotate_to_target_b(t_ps **list_b, t_ps *target);
void	ft_rotate_to_target_a(t_ps **list_a, t_ps *target);
void	ft_free_tab(char **tab);
void	cost_in_back(t_ps *item, t_ps *list);
t_ps	*ft_add_to_linked_list(t_ps *list, t_ps *item);
t_ps	*ft_free_list(t_ps *list);
t_ps	*ft_create_linked_list(const int size, char **input);
t_ps	*ft_create_item(const long input);
t_ps	*ft_sort_linked_list(t_ps **list_a, t_ps **list_b);
t_ps	*ft_sort_two(t_ps **list);
t_ps	*ft_sort_three(t_ps **list);
t_ps	*ft_sort_more(t_ps **list_a, t_ps **list_b);
t_ps	*calcul_cost_back(t_ps *list_a, t_ps *list_b);
t_ps	*ft_add_front_to_linked_list(t_ps *list, t_ps *item);

#endif
