/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:59:43 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 01:20:41 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *b, int r)
{
	int	i;
	int	tmp;
	int	tmp2;
	int	tmp3;

	i = 0;
	if (b->size > 1)
	{
		tmp3 = b->stack[b->size - 1];
		tmp = b->stack[i];
		while (i < b->size)
		{
			tmp2 = b->stack[i + 1];
			b->stack[i + 1] = tmp;
			tmp = tmp2;
			i++;
		}
		b->stack[0] = tmp3;
	}
	if (r == 1)
		write(1, "rrb\n", 4);
}
