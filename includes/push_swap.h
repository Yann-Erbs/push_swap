/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 02:28:41 by yerbs             #+#    #+#             */
/*   Updated: 2024/02/29 04:12:58 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // A SUPPRIME A LA FIN

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}				t_stack;

static void	ft_init_stack(t_stack **stack, int ac, char **args);
static t_stack *ft_get_next_min(t_stack **stack);
void	ft_index_stack(t_stack **stack);
void	ft_error(void);
int	ft_check_args(char **args, int ac);
int	ft_is_num(char *num);

#endif