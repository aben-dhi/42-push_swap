/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:39:21 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:24:59 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack *a, t_stack *b, int print)
{
	int	tmp;

	tmp = 0;
	if (a->size > 1)
	{
		tmp = a->stack[0];
		a->stack[0] = a->stack[1];
		a->stack[1] = tmp;
	}
	if (b->size > 1)
	{
		tmp = b->stack[0];
		b->stack[0] = b->stack[1];
		b->stack[1] = tmp;
	}
	if (print == 1)
		write(1, "ss\n", 3);
}
