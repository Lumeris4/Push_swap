/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_steps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:55:14 by lelanglo          #+#    #+#             */
/*   Updated: 2024/12/15 18:40:08 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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
