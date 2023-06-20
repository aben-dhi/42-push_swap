/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:49:42 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 00:09:35 by aben-dhi         ###   ########.fr       */
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

int get_max(t_stack *a)
{
    int i = 0;
    int max = a->stack[0];

    if (a->size == 0)
        return -1; // Handle the case when the stack is empty

    while (i < a->size)
    {
        if (a->stack[i] > max)
            max = a->stack[i];
        i++;
    }

    return max;
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
		{
			sa(a);
		}
		else if (a->stack[0] != min && a->stack[1] == max && !is_sorted(a))
			rra(a, 1);
	}
	printf("max = %d\n", max);
}
