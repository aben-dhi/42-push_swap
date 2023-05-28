/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:52:53 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/05/28 14:04:55 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	char	**args;
	int	j;

	if (argc < 2)
		return (0);
	process_arguments(argc, argv);
	i = 1;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		i = 0;
		while (args[i])
			i++;
		argv = (char **)malloc((argc + i + 2) * sizeof(char *));
		if (!argv)
			ft_error();
		j = 0;
		while (j < i)
		{
			argv[j + 1] = args[j];
			j++;
		}
		argv[i + 1] = NULL;
		free (args);
		argc = i + 1;
	}
	if (!check_args(argc, argv))
		ft_error();
	a = store_input(argc, argv);
	if (a == NULL)
		ft_error();
	return (0);
}
