/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:21:27 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:27:48 by aben-dhi         ###   ########.fr       */
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
			pb(a, b, 1);
		else
			ra(a, 1);
	}
	sort_three(a);
	while (b->size > 0)
		pa(a, b, 1);
}

void	sort(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a, 1);
	else if (a->size <= 3)
		sort_three(a);
	else if (a->size <= 5)
		sort_five(a, b);
	else if (a->size <= 15)
		sort_small(a, b);
	else
		sort_big(a, b);
	free_all(a, b);
}
