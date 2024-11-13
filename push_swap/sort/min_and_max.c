/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_and_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:43:01 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/13 11:05:36 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	init_tstack(t_stack *stack, char name, t_list **stack_a)
{
	stack->top = *stack_a;
	stack->size = ft_lstsize(*stack_a);
	stack->name = name;
	stack->min_node = NULL;
	stack->min_value = 0;
	stack->max_node = NULL;
	stack->max_value = 0;
}

void	ft_min(t_stack *stack)
{
	t_list	*min;
	t_list	*current;

	if (!stack || !stack->top)
		return ;
	min = stack->top;
	current = stack->top->next;
	while (current)
	{
		if (*(int *)(current->content) < *(int *)(min->content))
		{
			min = current;
		}
		current = current->next;
	}
	stack->min_node = min;
	stack->min_value = *(int *)(min->content);
}

void	ft_max(t_stack *stack)
{
	t_list	*max;
	t_list	*current;

	if (!stack || !stack->top)
		return ;
	max = stack->top;
	current = stack->top->next;
	while (current)
	{
		if (*(int *)(current->content) > *(int *)(max->content))
		{
			max = current;
		}
		current = current->next;
	}
	stack->max_node = max;
	stack->max_value = *(int *)(max->content);
}
