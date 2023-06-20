/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:52:13 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/20 01:36:35 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	int			*stack;
	int			size;
	int			top;
	int			*rank;
}	t_stack;

// actions
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a, int ww);
void	rrb(t_stack *b, int ww);
void	rrr(t_stack *a, t_stack *b);

// utils
int		ft_atoi(char *str);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(const char *str);

//parsing
void	ft_error(void);
int		ft_isspace(char c);
int		check_input(char *s);
t_stack	*store_input(char *s);
int		check_duplicates(t_stack *a);
int		is_sorted(t_stack *a);

// sort
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	free_all(t_stack *a, t_stack *b);
int		get_min(t_stack *a);
int		get_max(t_stack *a);
void	sort_big(t_stack *a, t_stack *b);

#endif