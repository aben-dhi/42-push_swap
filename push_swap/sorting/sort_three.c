/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:49:42 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 15:27:09 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_stack *a)
{
	int	i;
	int	min;

	i = 0;
	min = a->stack[0];
	while (i < a->size)
	{
		if (a->stack[i] < min)
			min = a->stack[i];
		i++;
	}
	return (min);
}

int	get_max(t_stack *a)
{
	int	i;
	int	max;

	i = 0;
	max = a->stack[0];
	while (i < a->size)
	{
		if (a->stack[i] > max)
			max = a->stack[i];
		i++;
	}
	return (max);
}

void	conditions(t_stack *a, int min, int max)
{
	if (a->stack[0] == max && a->stack[1] == min && !is_sorted(a))
		ra(a);
	else if (a->stack[0] == max && a->stack[2] == min)
	{
		ra(a);
		sa(a);
	}
	else if (a->stack[0] == min && a->stack[1] == max && !is_sorted(a))
	{
		rra(a, 1);
		sa(a);
	}
	else if (a->stack[1] == min && a->stack[2] == max && !is_sorted(a))
		sa(a);
	else if (a->stack[0] != min && a->stack[1] == max && !is_sorted(a))
		rra(a, 1);
}

void	sort_three(t_stack *a)
{
	int	min;
	int	max;

	min = get_min(a);
	max = get_max(a);
	if (is_sorted(a))
		return ;
	if (!is_sorted(a))
	{
		conditions(a, min, max);
	}
}
