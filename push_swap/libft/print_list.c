/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:09:08 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/10 12:12:34 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_list(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	ft_printf("NULL\n");
}
