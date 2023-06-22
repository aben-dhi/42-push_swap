/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-dhi <aben-dhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:52:13 by aben-dhi          #+#    #+#             */
/*   Updated: 2023/06/22 15:14:02 by aben-dhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	int			*stack;
	int			size;
	int			*rank;
}	t_stack;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

//get_next_line
char	*get_next_line(int fd);
char	*ft_read(int fd, char *left_str);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *left_str, char *buff);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *left_str);
char	*ft_new_str(char *left_str);


// actions
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a, int r);
void	rrb(t_stack *b, int r);
void	rrr(t_stack *a, t_stack *b);

// utils
int		ft_atoi(char *str, int *err);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin1(char *s1, char *s2);
int		ft_strlen1(const char *str);
char	*ft_strdup(const char *s1);

//parsing
void	ft_error(void);
int		ft_isspace(char c);
int		check_input(char *s);
void	store_input(t_stack **a, char *s);
int		check_duplicates(t_stack *a);
int		is_sorted(t_stack *a);

// sort
void	free_all(t_stack *a, t_stack *b);
int		get_min(t_stack *a);
int		get_max(t_stack *a);
void	sort(t_stack *a, t_stack *b);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	sort_small(t_stack *a, t_stack *b);
void	sort_big(t_stack *a, t_stack *b);
void	sort_big_annexe(t_stack *a, t_stack *b, int range, int len);

//checker
void	execute_coms(t_stack **a, t_stack **b);

#endif