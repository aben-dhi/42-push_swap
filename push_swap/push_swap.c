/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:52:53 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/03 20:15:25 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *ft_args(int argc, char **argv)
{
	int i;
	char *input;

	input = malloc(sizeof(char) * 1);
	if (input == NULL)
		ft_error();
	input[0] = '\0';
	i = 1;
	while (i < argc)
	{
		input = ft_strjoin(input, argv[i]);
		input = ft_strjoin(input, " ");
		i++;
	}
	return (input);
}

int main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*input;

	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	if (a == NULL)
		ft_error();
	a->stack = NULL;
	if (argc < 2)
		return (0);
	input = ft_args(argc, argv);
	if (!check_input(input))
	{
		write(1, "Error\n", 7);
		free(input);
		free(a);
		return (1);
	}
	a = store_input(input);
	free(input);
	if (check_duplicates(a) == 0)
	{
		free(a->stack);
		free(a);
		ft_error();
	}
	if (is_sorted(a))
	{
		free(a->stack);
		free(a);
		return (0);
	}
	else
		sort_three(a);
	free(a);
	return (0);
}
