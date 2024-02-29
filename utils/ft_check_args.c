/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerbs <yerbs@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 02:50:07 by yerbs             #+#    #+#             */
/*   Updated: 2024/02/29 03:09:19 by yerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_num(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int ft_check_args(char **args, int ac)
{
	int	i;
	long	tmp;

	i = 1;
	if (ac == 2)
		i = 0;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_is_num(args[i]))
			return (0);
		if (tmp < -2147483648 || tmp > 2147483647)
			return (0);
		i++;
	}
	return (1);
}