/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:14:24 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/12 13:34:41 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_stack *a, t_stack *b)
{	
	int	min;
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (i < a->size)
	{
		min = get_min(a);
		if (a->stack[0] == min)
		{
			pb(a, b);
			p++;
			i++;
		}
		else if (a->stack[a->size - 1] == min || a->stack[a->size - 2] == min)
			rra(a);
		else
			ra(a);
		if (p == 2)
			break ;
	}		
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
