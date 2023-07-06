/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:40:47 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:11:32 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *a, t_stack *b, int print)
{
	int	i;
	int	tmp;
	int	tmp2;

	i = 0;
	if (a->size > 0)
	{
		tmp = ((tmp2 = a->stack[i + 1]), a->stack[0]);
		while (i < a->size)
		{
			a->stack[i++] = tmp2;
			tmp2 = a->stack[i + 1];
		}
		a->size--;
		i = b->size;
		while (i-- >= 0)
		{
			b->stack[i + 1] = b->stack[i];
		}
		b->stack[0] = ((tmp2 = b->stack[0]), tmp);
		b->size++;
		if (print == 1)
			write(1, "pb\n", 3);
	}
}
