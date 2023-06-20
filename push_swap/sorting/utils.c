/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:29:00 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 15:49:50 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	range_c(int *range, int len, int *i)
{
	if (*range < len - 1)
	{
		(*range)++;
		(*i)++;
	}
}

void	sort_big_annexe(t_stack *a, t_stack *b, int range, int len)
{
	int	i;

	i = 0;
	while (a->size)
	{
		if (a->stack[0] >= a->rank[i] && a->stack[0] <= a->rank[range])
		{
			pb(a, b);
			range_c(&range, len, &i);
		}
		else if (a->stack[0] < a->rank[i])
		{
			pb(a, b);
			rb(b);
			range_c(&range, len, &i);
		}
		else if (a->stack[0] > a->rank[range])
			ra(a);
	}
}
