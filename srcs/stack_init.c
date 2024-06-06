/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 02:15:42 by yerbs             #+#    #+#             */
/*   Updated: 2024/06/06 15:11:43 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_init(t_stack	**stack_a, char **av, int ac)
{
	int	i;

	i = 0;
	if (ac != 2)
		i = 1;
	while (av[i])
	{
		append_node(stack_a, ft_atoi(av[i]));
		++i;
	}
}
