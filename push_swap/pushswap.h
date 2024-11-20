/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:40:13 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/20 11:08:28 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <limits.h>

int		check_double(char **argv, int argc);
int		check_letter_in_number(char **argv, int argc);
int		too_long(char **argv, int argc);
int		check_errors(char **argv, int argc);
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
void	init_stack(t_list **stack_a, char **argv, int argc);
int		is_sort(t_list **stack_a);
int		is_sort_descending(t_list **stack_a);
void	mini_sort(t_list **stack_a);
void	ft_max(t_list **stack);
void	ft_min(t_list **stack);
int		get_steps_to_min(t_list **b);
int		get_steps_to_max(t_list **a);
void	sort_b(t_list **b);
void	sort_a(t_list **a);
int		find_closest_upper(t_list **stack_a, t_list **stack_b);
int		can_push(t_list **stack_a, t_list **stack_b);
int		find_the_cheapest(t_list **stack_a, t_list **stack_b);
void	turkish_sort(t_list **a, t_list **b);
#endif