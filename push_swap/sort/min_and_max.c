/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_and_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:43:01 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/28 12:29:14 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_min(t_list **stack)
{
	t_list	*min;
	t_list	*current;

	if (!stack || !*stack)
		return ;
	min = *stack;
	current = (*stack)->next;
	while (current)
	{
		if (current->content < min->content)
			min = current;
		current = current->next;
	}
	(*stack)->min_node = min;
	(*stack)->min_value = min->content;
}

int	ft_max(t_list **stack)
{
	t_list	*max;
	t_list	*current;

	if (!stack || !*stack)
		return 0;
	max = *stack;
	current = (*stack)->next;
	while (current)
	{
		if (current->content > max->content)
			max = current;
		current = current->next;
	}
	(*stack)->max_node = max;
	(*stack)->max_value = max->content;
	return (max->content);
}

