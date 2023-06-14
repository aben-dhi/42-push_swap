/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:46:44 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/11 22:06:45 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *a)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (a->size > 1)
	{
		tmp = a->stack[0];
		while (i < a->size - 1)
		{
			a->stack[i] = a->stack[i + 1];
			i++;
		}
		a->stack[i] = tmp;
	}
	a->stack[i] = tmp;
	write(1, "ra\n", 3);
}
