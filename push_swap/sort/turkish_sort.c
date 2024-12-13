/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:48:44 by lelanglo          #+#    #+#             */
/*   Updated: 2024/12/13 13:21:48 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	turkish_sort_code(t_list **a, t_list **b)
{
	int	cheapest;
	int	closest;
	int	closest_lower;

	while (ft_lstsize(*a) > 3 && !is_sort(a))
	{
		cheapest = find_the_cheapest(a, b);
		value_on_top(a, cheapest);
		closest_lower = find_closest_lower(b, a);
		value_on_top_b(b, closest_lower);
		pb(a, b);
	}
	rb(b,1);
	mini_sort(a);
	while (*b)
	{
		closest = find_closest_upper(a, b);
		if (!can_push(a, closest))
			value_on_top(a, closest);
		pa(a, b);
	}
	if (!is_sort(a))
		value_on_top(a, ft_min(a));
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
		if ((*b)->content < (*b)->next->content)
			sb(b, 1);
		turkish_sort_code(a, b);
	}
}
