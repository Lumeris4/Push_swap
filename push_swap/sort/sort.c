/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:24:16 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/24 15:38:10 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_b(t_list **b)
{
	int	size;
	int	steps;

	ft_max(b);
	steps = 0;
	size = ft_lstsize(*b);
	if (!is_sort_descending(b))
	{
		steps = get_steps_to_max(b);
		if (steps <= size / 2)
		{
			while (steps--)
				rb(b, 1);
		}
		else
		{
			while (steps++ < size)
				rrb(b, 1);
		}
	}
}

void	value_on_top(t_list **a, int value)
{
	int	size;
	int	steps;

	steps = 0;
	size = ft_lstsize(*a);
	steps = get_steps_to_value(a, value);
	if (steps <= size / 2)
	{
		while (steps--)
			ra(a, 1);
	}
	else
	{
		while (steps++ < size)
			rra(a, 1);
	}
}

int	find_closest_upper(t_list **stack_a, t_list **stack_b)
{
	int		first;
	t_list	*current;
	int		closest_upper;

	first = (*stack_b)->content;
	current = *stack_a;
	closest_upper = INT_MAX;
	while (current)
	{
		if (current->content > first && current->content < closest_upper)
			closest_upper = current->content;
		current = current->next;
	}
	if (closest_upper == INT_MAX)
		return (INT_MIN);
return (closest_upper);
}

int	can_push(t_list **stack_a, int value)
{
	if (value == (*stack_a)->content)
		return (1);
	return (0);
}
