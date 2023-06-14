/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:26:20 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/03 19:37:01 by aben-dhi         ###   ########.fr       */
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

int	conversion(char *str, int i)
{
	int	nb;
	int	digit;

	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		if (nb > INT_MAX / 10 || (nb == INT_MAX / 10 && digit > INT_MAX % 10))
			ft_error();
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

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
	if (nb > 2147483647 || nb < -2147483648)
		return (0);
	return (sign * nb);
}
