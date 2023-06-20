/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:52:53 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 17:55:51 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_args(int argc, char **argv)
{
	int		i;
	char	*input;
	char	*tmp;

	input = ft_strdup("");
	if (input == NULL)
		ft_error();
	i = 1;
	while (i < argc)
	{
		tmp = input;
		input = ft_strjoin(input, argv[i]);
		free(tmp);
		tmp = input;
		input = ft_strjoin(input, " ");
		free(tmp);
		i++;
	}
	return (input);
}

void	norm(t_stack **a, t_stack **b, char *input, int argc)
{
	if (argc < 2)
	{
		free_all(*a, *b);
		free(input);
		return ;
	}
	if (!check_input(input))
	{
		free_all(*a, *b);
		free(input);
		ft_error();
	}
	*a = store_input(input);
	while (1);
	free(input);
	(*b)->stack = NULL;
	(*b)->stack = malloc(sizeof(int) * (*a)->size);
	(*b)->size = 0;
	if ((*b)->stack == NULL)
	{
		free_all(*a, *b);
		ft_error();
	}
	if (check_duplicates(*a) == 0)
	{
		free_all(*a, *b);
		ft_error();
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*input;

	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	if (a == NULL || b == NULL)
		ft_error();
	a->stack = NULL;
	a->rank = NULL;
	b->rank = NULL;
	input = ft_args(argc, argv);

	norm(&a, &b, input, argc);
	while (1);
	if (is_sorted(a))
	{
		free_all(a, NULL);
		return (0);
	}
	else
		sort(a, b);
	// while (1);
	// exit(0);
	// free_all(a, b);
	return (0);
}
