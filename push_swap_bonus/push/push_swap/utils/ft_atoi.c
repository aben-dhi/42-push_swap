/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:26:20 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 19:44:28 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isspace(char c)
{
	while (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v'
		|| c == '\f')
		return (1);
	return (0);
}

long	conversion(char *str, int i)
{
	long	nb;

	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb > 2147483649)
			break ;
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	return (nb);
}

int	ft_atoi(char *str, int *err)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		else if (str[i] == '-')
			sign = -1;
		i++;
	}
	nb = conversion(str, i);
	if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
		*err = 1;
	return (sign * nb);
}
