/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_coms.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:42:39 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:48:14 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap/push_swap.h"

void	free_stuff(t_stack **a, t_stack **b, char *line)
{
	free_all(*a, *b);
	free(line);
	ft_error();
}

void	execute_coms(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		sa(*a, 0);
	else if (!ft_strcmp(line, "sb\n"))
		sb(*b, 0);
	else if (!ft_strcmp(line, "ss\n"))
		ss(*a, *b, 0);
	else if (!ft_strcmp(line, "pa\n"))
		pa(*a, *b, 0);
	else if (!ft_strcmp(line, "pb\n"))
		pb(*a, *b, 0);
	else if (!ft_strcmp(line, "ra\n"))
		ra(*a, 0);
	else if (!ft_strcmp(line, "rb\n"))
		rb(*b, 0);
	else if (!ft_strcmp(line, "rr\n"))
		rr(*a, *b, 0);
	else if (!ft_strcmp(line, "rra\n"))
		rra(*a, 0);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(*b, 0);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(*a, *b, 0);
	else
		free_stuff(a, b, line);
}

void	coms_check(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		execute_coms(a, b, line);
		free(line);
		line = get_next_line(0);
	}
}
