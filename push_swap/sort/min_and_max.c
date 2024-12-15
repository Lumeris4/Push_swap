/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_and_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 08:43:01 by lelanglo          #+#    #+#             */
/*   Updated: 2024/12/15 18:39:00 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_min(t_list **stack)
{
	t_list	*min;
	t_list	*current;

	if (!stack || !*stack)
		return (0);
	min = *stack;
	current = (*stack)->next;
	while (current)
	{
		if (current->content < min->content)
			min = current;
		current = current->next;
	}
	return (min->content);
}
