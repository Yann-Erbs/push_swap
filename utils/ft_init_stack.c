/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 03:36:37 by yerbs             #+#    #+#             */
/*   Updated: 2024/02/29 04:09:17 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_stack *ft_get_next_min(t_stack **stack)
{
	t_stack	head;
	t_stack min;
	int	has_min

	head = *stack;
	min = NULL;
	has_min = 0;
	while(head)
	{
		if ((head->index == -1) && (!has_min || head->value < min->value))
		{
			min = head;
			has_min = 1;
		}
		head = head->next;
	}
	return (min);
}

void	ft_index_stack(t_stack **stack)
{
	t_stack	*head;
	int	index;

	head = ft_get_next_min(stack);
	index = 0;
	while (head)
	{
		head->index = index++;
		head = ft_get_next_min(stack);
	}
}

static void	ft_init_stack(t_stack **stack, int ac, char **args)
{
	int	i;
	t_stack	*new;

	i = 1;
	if (ac == 2)
		i = 0;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	ft_index_stack(stack);
}