/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:50:44 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/11 22:06:39 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_stack *b)
{
	int	i;
	int	tmp;

	i = 0;
	if (b->size > 1)
	{
		tmp = b->stack[0];
		while (i < b->size - 1)
		{
			b->stack[i] = b->stack[i + 1];
			i++;
		}
		b->stack[i] = tmp;
	}
	write(1, "rb\n", 3);
}
