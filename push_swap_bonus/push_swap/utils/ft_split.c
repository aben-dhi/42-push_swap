/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:01:08 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 17:48:01 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	charsep(char c, char sep)
{
	int	i;

	i = 0;
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static void	write_w(char *dest, char *from, char sep)
{
	int	i;

	i = 0;
	while (charsep(from[i], sep) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	*write_s(char **split, char *str, char sep)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (charsep(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (charsep(str[i + j], sep) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (0);
			write_w(split[word++], str + i, sep);
			i += j;
		}
	}
	return ((void *)1);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	int		index;
	char	**split;
	int		i;

	if (!s)
		return (0);
	str = (char *)s;
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (charsep(str[i + 1], c) == 1 && charsep(str[i], c) == 0)
			index++;
		i++;
	}
	split = (char **)malloc(sizeof(char *) * (index + 1));
	if (split == NULL)
		return (NULL);
		split[index] = 0;
	if (write_s(split, str, c) == NULL)
		return (NULL);
	return (split);
}
