/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:43:44 by yerbs             #+#    #+#             */
/*   Updated: 2024/03/19 08:50:21 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_sorted(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while(head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}