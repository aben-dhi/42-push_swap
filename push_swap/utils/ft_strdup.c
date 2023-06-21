/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:47:38 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/21 18:12:00 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*d1;
	char	*d2;

	i = 0;
	d2 = ((d1 = (char *)malloc(ft_strlen1(s1) * sizeof(char) + 1)));
	if (d1 == 0)
		return (0);
	while (s1[i])
	{
		d1[i] = s1[i];
		i++;
	}
	d1[i] = '\0';
	return (d1);
}
