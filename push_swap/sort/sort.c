/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:24:16 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/20 08:56:29 by lelanglo         ###   ########.fr       */
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
	}
	else
	{
		while (steps++ < size)
			rrb(b, 1);
	}
}

void	sort_a(t_list **a)
{
	int	size;
	int	steps;

	ft_min(a);
	steps = 0;
	size = ft_lstsize(*a);
	if (!is_sort(a))
	{
		steps = get_steps_to_min(a);
		if (steps <= size / 2)
		{
			while (steps--)
				ra(a, 1);
		}
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
	closest_upper = 2147483647;
	while (current)
	{
		if (current->content > first && current->content < closest_upper)
			closest_upper = current->content;
		current = current->next;
	}
	return (closest_upper);
}

int	can_push(t_list **stack_a, t_list **stack_b)
{
	int	closest;

	closest = find_closest_upper(stack_a, stack_b);
	if (closest == (*stack_a)->content)
		return (1);
	return (0);
}
