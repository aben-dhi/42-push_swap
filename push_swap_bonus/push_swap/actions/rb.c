/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:50:44 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:15:13 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack *b, int print)
{
	int	i;
	int	tmp;

	i = 0;
	if (b->size > 1)
	{
		tmp = b->stack[0];
		while (i < b->size)
		{
			b->stack[i] = b->stack[i + 1];
			i++;
		}
		b->stack[b->size - 1] = tmp;
		if (print == 1)
			write(1, "rb\n", 3);
	}
}
