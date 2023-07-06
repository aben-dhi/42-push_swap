/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:29:33 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 19:50:19 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_all(t_stack *a, t_stack *b)
{
	if (a != NULL)
	{
		if (a->stack)
			free(a->stack);
		if (a->rank)
			free(a->rank);
		if (a)
			free(a);
	}
	if (b != NULL)
	{
		if (b->stack)
			free(b->stack);
		if (b)
			free(b);
	}
}
