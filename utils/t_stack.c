/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:07:39 by yerbs             #+#    #+#             */
/*   Updated: 2024/03/19 10:17:15 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

t_stack	*ft_lstlast(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void	ft_lstadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*n;

	if (*stack)
	{
		n = ft_lstlast(*stack);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int	ft_lstsize(t_stack *head)
{
	size_t	i;
	t_stack	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	printList(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putchar_fd(' ', 1);
		ft_putnbr_fd(tmp->index, 1);
		ft_putchar_fd('\n', 1);
		tmp = tmp->next;
	}
}
