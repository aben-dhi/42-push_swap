/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:55:13 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 01:19:42 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *a, int r)
{
	int	i;
	int	tmp;
	int	tmp2;
	int	tmp3;

	i = 0;
	if (a->size > 1)
	{
		tmp3 = a->stack[a->size - 1];
		tmp = a->stack[i];
		while (i < a->size)
		{
			tmp2 = a->stack[i + 1];
			a->stack[i + 1] = tmp;
			tmp = tmp2;
			i++;
		}
		a->stack[0] = tmp3;
	}
	if (r == 1)
		write(1, "rra\n", 4);
}
