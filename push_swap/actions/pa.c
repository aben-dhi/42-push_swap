/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:39:46 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/11 22:35:50 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	i;
	int j = 1;

	i =0;
	if (b->size > 0)
	{
		while (a->size >= j )
		{
			a->stack[a->size - j + 1] = a->stack[a->size - j];
			j++;
		}
		a->stack[0] = b->stack[0];
		while (i < b->size)
		{
			b->stack[i] = b->stack[i + 1];
			i++;
		}
		b->size--;
		a->size++;
	}
	write(1, "pa\n", 3);
}
