/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:14:24 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/05 15:34:36 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_stack *a, t_stack *b)
{
	int	*stack = a->stack;
	int	i;

	i = 0;

	while (i < 2)
	{
		pb(a, b);
		// printf("sizeb : %d\n", b->size);
		// printf("sizea : %d\n", a->size);
		i++;
	}
	if (a->size == 3)
		sort_three(a);
	pa(a, b);
	// printf("sizeb : %d\n", b->size);
	// printf("sizea : %d\n", a->size);
	pa(a, b);
	// printf("sizeb : %d\n", b->size);
	// printf("sizea : %d\n", a->size);
}
