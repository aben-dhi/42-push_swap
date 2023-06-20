/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:04:04 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 17:54:43 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_input(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) || s[i] == ' ' || s[i] == '-' || s[i] == '+')
			i++;
		else
			return (0);
	}
	return (1);
}

void	split_elements(t_stack *a, char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
	{
		a->stack[i] = ft_atoi(split[i]);
		if (ft_atoi(split[i]) == 0 && split[i][0] != '0'
		&& !(split[i][0] == '-' && split[i][1] == '\0'))
		{
			free_all(a, NULL);
			ft_error();
		}
		if (a->stack[i] > 2147483647 || a->stack[i] < -2147483648)
		{
			free_all(a, NULL);
			ft_error();
		}
		i++;
	}
}

t_stack	*store_input(char *s)
{
	char	**split;
	int		num_elements;
	t_stack	*a;

	a = malloc(sizeof(t_stack));
	if (a == NULL)
		ft_error();
	split = ft_split(s, ' ');
	num_elements = 0;
	while (split[num_elements])
		num_elements++;
	a->size = num_elements;
	a->stack = malloc(sizeof(int) * num_elements);
	if (a->stack == NULL)
	{
		free(a);
		ft_error();
	}
	split_elements(a, split);
	while (num_elements + 1)
	{
		free(split[num_elements]);
		num_elements--;
	}
	free(split);
	return (a);
}

int	check_duplicates(t_stack *a)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (a->stack[i] == a->stack[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
