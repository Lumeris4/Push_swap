/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:40:13 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/13 11:01:13 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	t_list	*top;
	int		size;
	char	name;
	t_list	*min_node;
	int		min_value;
	t_list	*max_node;
	int		max_value;
}				t_stack;

int		check_double(char **argv);
int		check_letter_in_number(char **argv);
int		too_long(char **argv);
int		check_errors(char **argv);
void	rra(t_list **stack_a, int solo);
void	rrb(t_list **stack_b, int solo);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a, int solo);
void	sb(t_list **stack_b, int solo);
void	ss(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int solo);
void	rb(t_list **stack_b, int solo);
void	rr(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	init_stacka(t_list **stack_a, char **argv);
int		is_sort(t_list **stack_a);
void	mini_sort(t_list **stack_a);
void	ft_max(t_stack *stack);
void	ft_min(t_stack *stack);
void	init_tstack(t_stack *stack, char name, t_list **stack_a);
#endif