/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 23:12:44 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 15:31:48 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	annexe(t_stack *a, int *rank, int tmp)
{
	int	j;

	j = 0;
	while (j < a->size - 1)
	{
		if (rank[j] > rank[j + 1] && j < a->size)
		{
			tmp = rank[j];
			rank[j] = rank[j + 1];
			rank[j + 1] = tmp;
			j = 0;
		}
		else
			j++;
	}
}

//a function fills a->rank with the rank of each number in the stack
int	*get_rank(t_stack *a)
{
	int	*rank;
	int	i;
	int	tmp;

	rank = malloc(sizeof(int) * a->size);
	if (!rank)
		return (NULL);
	i = 0;
	while (i < a->size)
	{
		rank[i] = a->stack[i];
		i++;
	}
	tmp = 0;
	annexe(a, rank, tmp);
	return (rank);
}

//function that gets the max index in the stack
int	get_max_index(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i < b->size)
	{
		if (b->stack[i] == a->rank[b->size - 1])
			break ;
		i++;
	}
	return (i);
}

//a function that pushes back the elements in b to a sorted
void	push_back(t_stack *a, t_stack *b)
{
	int	max;

	max = 0;
	while (b->size)
	{
		max = get_max_index(a, b);
		if (max < (b->size / 2))
		{
			while (max != 0)
			{
				rb(b);
				max--;
			}
			pa(a, b);
		}
		else
		{
			while (max != b->size)
			{
				rrb(b, 1);
				max++;
			}
			pa(a, b);
		}
	}
}

void	sort_big(t_stack *a, t_stack *b)
{
	int	range;
	int	i;
	int	len;

	i = 0;
	len = a->size;
	if (a->size > 15)
		range = 2;
	if (a->size > 100)
		range = 35;
	else
		range = 15;
	a->rank = get_rank(a);
	sort_big_annexe(a, b, range, len);
	push_back(a, b);
}
