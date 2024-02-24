/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <necat.han42@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:22:42 by nhan              #+#    #+#             */
/*   Updated: 2024/02/24 16:29:26 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

typedef struct s_ps
{
	int			value;
	int			index;
	struct s_ps	*next;
	struct s_ps	*previous;
}	t_ps;

int		ft_is_tab_of_number(char **str, int len);
t_ps	*ft_linked_list_constructor(char **str, int len);
#endif
