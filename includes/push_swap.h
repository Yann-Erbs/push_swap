/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:36:28 by yerbs             #+#    #+#             */
/*   Updated: 2024/03/19 10:18:21 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

int		ft_error(void);
int		ft_check_args(char **args, int ac);
int		ft_is_sorted(t_stack **stack);
void	index_stack(t_stack **stack);

// ---- T_STACK ----

t_stack	*ft_lstnew(int value);
void	ft_lstadd_front(t_stack **stack, t_stack *new);
t_stack	*ft_lstlast(t_stack *head);
void	ft_lstadd_back(t_stack **stack, t_stack *new);
int	ft_lstsize(t_stack *head);
void	printList(t_stack *head);

#endif