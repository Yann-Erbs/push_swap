/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 02:28:05 by yerbs             #+#    #+#             */
/*   Updated: 2024/02/29 04:10:51 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int ac, char **av)
{
	char **args;
	t_stack **stack_a;
	t_stack **stack_b;
	
	if (ac < 2)
	{
		ft_error();
		return (1);
	}
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av;
	if (!ft_check_args(args, ac))
		ft_error();
	stack_a = (t_stack **)malloc(sizeof(t_stack));
	stack_b = (t_stack **)malloc(sizeof(t_stack));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_init_stack(stack_a, ac, args);
	return (0);
}