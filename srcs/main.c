/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:38:48 by yerbs             #+#    #+#             */
/*   Updated: 2024/03/20 09:23:13 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_init_stack (t_stack **stack, int ac, char **args)
{
	t_stack	*new;
	int i;

	i = 0;
	if (ac != 2)
		i = 1;
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
}


static t_stack	*get_next_min(t_stack **stack)
{
	t_stack	*head;
	t_stack	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_stack **stack)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

int main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	char	**args;
	
	if (ac < 2)
		return (ft_error());
	else if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av;
	if (!ft_check_args(args, ac))
		return (ft_error());
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_init_stack(stack_a, ac, args);
	if (ft_is_sorted(stack_a))
		ft_putstr_fd("The stack is already sorted\n", 1);
	printf("Stack A before\n");
	printList(*stack_a);
	//printf("Stack B before\n");
	//printList(*stack_b);
	printf("\n");
	ft_reverse_rotate(stack_a);
	//ft_push(stack_a, stack_b);
	printf("\n");
	printf("Stack A after\n");
	printList(*stack_a);
	//printf("\n");
	//printf("Stack B after\n");
	//printList(*stack_b);
	return(0);	
}