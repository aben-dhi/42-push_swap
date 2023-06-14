/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 23:12:44 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/14 20:53:18 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int find_pos(t_stack *a)
{
    int biggest = a ->stack[0];
    int index = 0;
    int i = 1;
    while (i <= a ->top)
	{
        if (a->stack[i] > biggest) {
            biggest = a->stack[i];
            index = i;
        }
        i++;
    }
    return (index);
}

// int rangefinder(int size)
// {
//     int range = 1;
//     while (range * range <= size)
// 	{
// 		range++;
//     }
//     range--;
//     return range;
// }

// //function that gets the min index in the stack
// int	get_min_index(t_stack *a)
// {
// 	int	i;
// 	int	min;
// 	int	min_index;

// 	i = 0;
// 	min = a->stack[0];
// 	min_index = 0;
// 	while (i < a->size)
// 	{
// 		if (a->stack[i] < min)
// 		{
// 			min = a->stack[i];
// 			min_index = i;
// 		}
// 		i++;
// 	}
// 	return (min_index);
// }

void	sort_big(t_stack *a, t_stack *b)
{
	int	ranger; 
	int	range; 

	range = 0;
	range = 15;
	a->top = a->size;
	while (a->top + 1)
	{
		if (a->stack[a->top] <= ranger)
		{
			pb(a, b);
			rb(a);
			ranger++;
		}
		else if (a->stack[a->top] <= ranger + range)
		{
			pb(a, b);
			ranger++;
		}
		else
			ra(a);
	} 
 } 
  
void	sort_big_parttwo(t_stack *a, t_stack *b, int big)
{
	int	pos;
	int	sup;

	sup = big;
	while (b->top + 1)
	{
		pos = find_pos(b);
		while (b->stack[b->top] != sup)
		{
			if (pos > b->top / 2)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
		sup--;
	}
}

void	sort_100(t_stack *a, t_stack *b)
{
	int	i;

	i = b->top;
	sort_big(a, b);
	sort_big_parttwo(a, b, i);
}
