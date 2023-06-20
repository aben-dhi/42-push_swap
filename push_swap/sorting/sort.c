/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:21:27 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 15:24:08 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//a function that sorts numbers less than 15
void	sort_small(t_stack *a, t_stack *b)
{
	int	min;

	while (a->size > 3)
	{
		min = get_min(a);
		if (a->stack[0] == min)
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	while (b->size > 0)
		pa(a, b);
}

void	sort(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a);
	else if (a->size <= 3)
		sort_three(a);
	else if (a->size <= 5)
		sort_five(a, b);
	else if (a->size <= 15)
		sort_small(a, b);
	else
		sort_big(a, b);
}
