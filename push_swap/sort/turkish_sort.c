/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:48:44 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/28 14:12:05 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	turkish_sort_code(t_list **a, t_list **b)
{
	int	cheapest;
	int	closest;

	while (ft_lstsize(*a) != 3 && !is_sort(a))
	{
		cheapest = find_the_cheapest(a, b);
		value_on_top(a, cheapest);
		pb(a, b);
	}
	mini_sort(a);
	while (*b)
	{
		sort_b(b);
		closest = find_closest_upper(a, b);
		if (closest == INT_MIN)
		{
			pa(a, b);
			ra(a, 1);
		}
		else
		{
			if (!can_push(a, closest))
				value_on_top(a,closest);
			pa(a, b);
		}
	}
	while (!is_sort(a))
		rra(a, 1);
}

void	turkish_sort(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
	{
		sa(a, 1);
		return ;
	}
	else if (ft_lstsize(*a) == 3)
		mini_sort(a);
	else
	{
		pb(a, b);
		pb(a, b);
		turkish_sort_code(a, b);
	}
}
