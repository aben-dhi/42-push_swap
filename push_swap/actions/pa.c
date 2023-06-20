/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:39:46 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 00:51:13 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	i;
	int	tmp;
	int	tmp2;

	i = 0;
	if (b->size > 0)
	{
		tmp = ((tmp2 = b->stack[i + 1]), b->stack[0]);
		while (i < b->size)
		{
			b->stack[i] = tmp2;
			i++;
			tmp2 = b->stack[i + 1];
		}
		b->size--;
		i = a->size;
		while (i >= 0)
		{
			a->stack[i + 1] = a->stack[i];
			i--;
		}
		tmp2 = ((a->stack[0] = tmp), a->stack[0]);
		a->size++;
		write(1, "pa\n", 3);
	}
}
