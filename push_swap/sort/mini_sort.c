/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:28:42 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/12 17:05:53 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	mini_sort(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)((*stack_a)->content);
	b = *(int *)((*stack_a)->next->content);
	c = *(int *)(ft_lstlast(*stack_a)->content);
	if (a > b && b < c && a < c)
		sa(stack_a, 1);
	else if (a > b && b > c)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (a > b && a > c && b < c)
		ra(stack_a, 1);
	else if (a < b && b > c && a < c)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (a < b && b > c && a > c)
		rra(stack_a, 1);
}
