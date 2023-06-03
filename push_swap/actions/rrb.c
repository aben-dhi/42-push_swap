/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:59:43 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/03 19:53:36 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *b)
{
	int	tmp;
	int	i;

	if (b->size > 1)
	{
		i = b->size - 1;
		tmp = b->stack[i];
		while (i > 0)
		{
			b->stack[i] = b->stack[i - 1];
			i--;
		}
		b->stack[0] = tmp;
	}
	printf("rrb\n");
}
