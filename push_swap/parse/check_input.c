/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:04:04 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/05/28 14:07:53 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//specify the expected input format
int	check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) || str[i] == ' ' || str[i] == '-')
			i++;
		else
			return (0);
	}
	return (1);
}

//validate the command line arguments
int	check_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) == 0)
			return (0);
		if (!check_input(argv[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//parse the input
int	*parse_input(int argc, char **argv)
{
	int	*stack;
	int	i;
	int	j;

	i = 1;
	j = 0;
	stack = (int *)malloc(sizeof(int) * (argc - 1));
	if (stack == NULL)
		return (NULL);
	while (i <= argc - 1)
	{
		stack[j] = (int)ft_atol(argv[i]);
		if (ft_atol(argv[i]) == 0)
			return (NULL);
		i++;
		j++;
	}
	return (stack);
}

//store the input in a stack
t_stack	*store_input(int argc, char **argv)
{
	t_stack	*a;
	int	*tab;
	int size_adjustment = 1;

	if (!check_args(argc, argv))
		return NULL;
	if (argc > 2) {
		size_adjustment = 2;
	}
	tab = parse_input(argc, argv);
	if (tab == NULL)
		return NULL;
	a = (t_stack *)malloc(sizeof(t_stack));
	if (a == NULL)
		return NULL;
	a->size = argc - 1; // Adjust the size based on argc
	a->stack = tab;
	return a;
}

//a function that differentiates between input formats
void process_arguments(int argc, char **argv)
{
	int *stack = (int *)malloc(argc * sizeof(int));
	int stackSize = 0;

	if (!stack)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}

	int i = 1;
	while (i < argc)
	{
		if (ft_isspace(*argv[i]))
		{
			char **subArguments = ft_split(argv[i], ' ');
			int j = 0;
			while (subArguments[j] != NULL)
			{
				stack[stackSize] = ft_atol(subArguments[j]);
				stackSize++;
				j++;
			}
			free(subArguments);
		}
		else
		{
			stack[stackSize] = ft_atol(argv[i]);
			stackSize++;
		}
		i++;
	}
	// Print the stack
	printf("Stack a:\n");
	int k = 0;
	while (k < stackSize)
	{
		printf("%d\n", stack[k]);
		k++;
	}

	// Clean up memory
	free(stack);
}
