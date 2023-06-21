/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:04:04 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/21 17:41:03 by aben-dhi         ###   ########.fr       */
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
		{
			if ((s[i] == '-' || s[i] == '+')
				&& (s[i + 1] == '-' || s[i + 1] == '+'))
				return (0);
			if ((s[i] == '-' || s[i] == '+') && !ft_isdigit(s[i + 1]))
				return (0);
			i++;
		}
		else
			return (0);
	}
	return (1);
}

void	split_elements(t_stack *a, char **split)
{
	int	i;
	int	err;

	err = 0;
	i = 0;
	while (split[i] != NULL)
	{
		a->stack[i] = ft_atoi(split[i], &err);
		if (err == 1)
		{
			free_all(a, NULL);
			ft_error();
		}
		i++;
	}
}

void	store_input(t_stack **a, char *s)
{
	char	**split;
	int		num_elements;

	if (*a == NULL)
		ft_error();
	split = ft_split(s, ' ');
	num_elements = 0;
	while (split[num_elements])
		num_elements++;
	(*a)->size = num_elements;
	(*a)->stack = malloc(sizeof(int) * num_elements);
	if ((*a)->stack == NULL)
	{
		free(*a);
		ft_error();
	}
	split_elements(*a, split);
	while (num_elements + 1)
	{
		free(split[num_elements]);
		num_elements--;
	}
	free(split);
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
