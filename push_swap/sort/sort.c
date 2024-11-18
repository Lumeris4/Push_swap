/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:24:16 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/18 14:48:56 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	move_to_b(t_list **a, t_list **b)
{
	int	steps;
	int	size;

	while (!is_sort(a))
	{
		ft_min(a);
		steps = get_steps_to_min(a);
		size = ft_lstsize(*a);
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
		pb(a, b);
		if (*b && (*b)->next && (*b)->content > (*b)->next->content)
			sb(b, 1);
	}
}

static void	move_to_a(t_list **a, t_list **b)
{
	int	steps;
	int	size;

	while (*b)
	{
		ft_max(b);
		steps = get_steps_to_max(b);
		size = ft_lstsize(*b);
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
		pa(a, b);
		if (*a && (*a)->next && (*a)->content > (*a)->next->content)
			sa(a, 1);
	}
}

void	turkish_sort(t_list **a, t_list **b)
{
	move_to_b(a, b);
	move_to_a(a, b);
}




