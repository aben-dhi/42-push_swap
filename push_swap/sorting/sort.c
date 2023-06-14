/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:21:27 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/14 13:30:30 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_stack *a, t_stack *b);
//function that sorts 5 but pushes the sorted elements to b
// void	sort_5_20(t_stack *	a, t_stack *b)
// {
// 	int	min;
// 	int	i;
// 	int	p;

// 	i = 0;
// 	p = 0;
// 	while (i < a->size)
// 	{
// 		min = get_min(a);
// 		if (a->stack[0] == min)
// 		{
// 			pb(a, b);
// 			p++;
// 			i++;
// 		}
// 		else if (a->stack[a->size - 1] == min || a->stack[a->size - 2] == min)
// 			rra(a);
// 		else
// 			ra(a);
// 		if (p == 2)
// 			break ;
// 	}		
// 	sort_three(a);
// 	// while (a->size)
// 	// 	pb(a, b);
// }

// //function that gets the closest index to the top of the stack
// int	get_closest_index(t_stack *a, int n)
// {
// 	int	i;
// 	int	closest_index;

// 	i = 0;
// 	closest_index = 0;
// 	while (i < a->size)
// 	{
// 		if (a->stack[i] == n)
// 		{
// 			closest_index = i;
// 			break ;
// 		}
// 		i++;
// 	}
// 	if (closest_index > a->size / 2)
// 		closest_index = a->size - closest_index;
// 	return (closest_index);
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


// void	sort_20(t_stack *a, t_stack *b)
{
// 	int i;
// 	int p;
	
// 	i = 0;
// 	p = 0;
// 	while (i < a->size)
// 	{
// 		int min_index = get_min_index(a);
// 		int closest_index = get_closest_index(a, min_index);
// 		if (closest_index <= a->size / 2)
// 		{
// 			while (a->stack[a->size - 1] != a->stack[closest_index])
// 				rra(a);
// 		}
// 		else
// 		{
// 			while (a->stack[0] != a->stack[closest_index])
// 				ra(a);
// 		}
// 		pb(a, b);
// 		p++;
// 		i++;
// 		if (p == 20)
// 			break;
// 	}
// }

	// int	min;
	// int	i;
	// int	p;

	// i = 0;
	// p = 0;
	// int size = a->size;
	// while (i <= a->size)
	// {
	// 	min = get_min(a);
	// 	if (a->stack[0] == min)
	// 	{
	// 		pb(a, b);
	// 		p++;
	// 		i++;
	// 	}
	// 	else if (a->stack[size] == min)
	// 	{
	// 		rra(a);
	// 	}
	// 	else
	// 		ra(a);
	// 	if (p == 20)
	// 		break ;
	// }	
	// int	i;
	// int	j;
	// int	min_index;

	// i = 0;
	// while (i < 20)
	// {
	// 	min_index = get_min(a);
	// 	j = i + 1;
	// 	while (j < 20)
	// 	{
	// 		if (a->stack[j] < a->stack[min_index])
	// 			min_index = j;
	// 		j++;
	// 	}
	// 	while (min_index > 0)
	// 	{
	// 		rra(a);
	// 		min_index--;
	// 	}
	// 	pb(a, b);
	// 	i++;
	// }
	// while (b->size > 0)
	// {
		// sort_five(a, b);
	// 	pa(a, b);
	// }
	// while (a->stack[a->size - 1] != 1)
	// 	ra(a);
// 	int	i;

// 	i = 0;
// 	while (i <= 5)
// 	{
// 		sort_5_20(a, b);
// 		i++;
// 	}
// }

// void	sort_100(t_stack *a, t_stack *b)
// {
// 	int	i;

// 	i = 0;
// 	while (i <= 8)
// 	{
// 		sort_20(a, b);
// 		i++;
// 	}
// 	while (b->size > 0)
// 	{
// 		pa(a, b);
// 	}
// }
