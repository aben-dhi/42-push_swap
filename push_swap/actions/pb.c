/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:40:47 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/11 22:39:44 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	int	i;
	int j = 1;

	i =0;
	if (a->size > 0)
	{
		while (b->size >= j )
		{
			b->stack[b->size - j + 1] = b->stack[b->size - j];
			j++;
		}
		b->stack[0] = a->stack[0];
		while (i < a->size)
		{
			a->stack[i] = a->stack[i + 1];
			i++;
		}
		a->size--;
		b->size++;
	}
	write(1, "pb\n", 3);
}
