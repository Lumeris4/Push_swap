/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 08:52:30 by lelanglo          #+#    #+#             */
/*   Updated: 2024/12/12 11:38:30 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	find_position_in_b(t_list **stack_b, int value)
{
	t_list	*current;
	int		pos;

	current = *stack_b;
	pos = 0;
	while (current)
	{
		if (current->content > value)
			break;
		pos++;
		current = current->next;
	}
	return (pos);
}

static int	calculate_total_cost(int pos_a, int pos_b, int size_a, int size_b)
{
	int	cost_a;
	int	cost_b;

	cost_a = (pos_a > size_a / 2) ? size_a - pos_a : pos_a;
	cost_b = (pos_b > size_b / 2) ? size_b - pos_b : pos_b;
	return (cost_a + cost_b);
}

int	find_the_cheapest(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	int		best_value;
	int		pos_a;
	int		min_cost;
	int		size_a;
	int		size_b;

	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	current = *stack_a;
	best_value = 0;
	pos_a = 0;
	min_cost = 2147483647;
	while (current)
	{
		int pos_b = find_position_in_b(stack_b, current->content);
		int cost = calculate_total_cost(pos_a, pos_b, size_a, size_b);
		if (cost < min_cost)
		{
			min_cost = cost;
			best_value = current->content;
		}
		current = current->next;
		pos_a++;
	}
	return (best_value);
}
