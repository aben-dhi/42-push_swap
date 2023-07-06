/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:53:00 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:15:56 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack *a, t_stack *b, int print)
{
	int	i;
	int	tmp;

	if (b->size > 1)
	{
		tmp = ((i = 0), b->stack[0]);
		while (i < b->size)
		{
			b->stack[i] = b->stack[i + 1];
			i++;
		}
		b->stack[b->size - 1] = tmp;
	}
	i = 0;
	if (a->size > 1)
	{
		tmp = a->stack[0];
		while (i++ < a->size)
		{
			a->stack[i] = a->stack[i + 1];
		}
		a->stack[a->size - 1] = tmp;
	}
	if (print == 1)
		write(1, "rr\n", 3);
}
