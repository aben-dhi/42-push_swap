/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:12:33 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 21:50:27 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap/push_swap.h"

char	*ft_args(int argc, char **argv)
{
	int		i;
	char	*input;
	char	*tmp;

	input = ft_strdup("        ");
	if (input == NULL)
		ft_error();
	i = 1;
	while (i < argc)
	{
		tmp = input;
		input = ft_strjoin1(input, argv[i]);
		free(tmp);
		tmp = input;
		input = ft_strjoin1(input, " ");
		free(tmp);
		i++;
	}
	return (input);
}

void	norm(t_stack **a, t_stack **b, char *input)
{
	if (check_input(input) == 0)
	{
		free_all(*a, *b);
		free(input);
		ft_error();
	}
	store_input(a, input);
	(*b)->stack = NULL;
	(*b)->stack = malloc(sizeof(int) * (*a)->size);
	(*b)->size = 0;
	if ((*b)->stack == NULL)
	{
		free_all(*a, *b);
		free(input);
		ft_error();
	}
	if (check_duplicates(*a) == 0)
	{
		free_all(*a, *b);
		free(input);
		ft_error();
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*input;

	if (argc < 2)
		return (0);
	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	if (a == NULL || b == NULL)
		ft_error();
	a->stack = NULL;
	a->rank = NULL;
	input = ft_args(argc, argv);
	norm(&a, &b, input);
	coms_check(&a, &b);
	if (is_sorted(a) && b->size == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
