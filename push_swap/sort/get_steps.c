/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_steps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:55:14 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/20 14:31:06 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	get_steps_to_max(t_list **a)
{
	t_list	*a_temp;
	int		count;

	if (!a || !*a)
		return (0);
	a_temp = *a;
	count = 0;
	while (a_temp)
	{
		if (a_temp->content == (*a)->max_value)
			break ;
		count++;
		a_temp = a_temp->next;
	}
	return (count);
}

int	get_steps_to_min(t_list **b)
{
	t_list	*b_temp;
	int		count;

	if (!b || !*b)
		return (0);
	b_temp = *b;
	count = 0;
	while (b_temp)
	{
		if (b_temp->content == (*b)->min_value)
			break ;
		count++;
		b_temp = b_temp->next;
	}
	return (count);
}

int	get_steps_to_value(t_list **b, int value)
{
	t_list	*b_temp;
	int		count;

	if (!b || !*b)
		return (0);
	b_temp = *b;
	count = 0;
	while (b_temp)
	{
		if (b_temp->content == value)
			break ;
		count++;
		b_temp = b_temp->next;
	}
	return (count);
}
