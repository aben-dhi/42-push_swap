/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:37:00 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:23:50 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *a, int print)
{
	int	tmp;

	tmp = 0;
	if (a->size > 1)
	{
		tmp = a->stack[0];
		a->stack[0] = a->stack[1];
		a->stack[1] = tmp;
		if (print == 1)
			write(1, "sa\n", 3);
	}
}
