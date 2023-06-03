/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:49:42 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/03 19:59:13 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_three(t_stack *a)
{
	while (!is_sorted(a))
	{
		if (a->stack[0] > a->stack[1] && a->stack[0] < a->stack[2])
		{
			sa(a);
			rra(a);
		}
		else if (a->stack[0] > a->stack[1] && a->stack[0] > a->stack[2])
		{
			if (a->stack[1] > a->stack[2])
			{
				sa(a);
				rra(a);
			}
			else
				ra(a);
		}
		else if (a->stack[0] < a->stack[1] && a->stack[0] < a->stack[2])
		{
			if (a->stack[1] > a->stack[2])
				rra(a);
			else
				sa(a);
		}
	}
}