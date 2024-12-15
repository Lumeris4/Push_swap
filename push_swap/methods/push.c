/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:05:42 by lelanglo          #+#    #+#             */
/*   Updated: 2024/12/15 18:42:23 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*new_a;

	if (!*stack_b)
		return ;
	new_a = *stack_b;
	*stack_b = (*stack_b)->next;
	new_a->next = *stack_a;
	*stack_a = new_a;
	ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*new_b;

	if (!*stack_a)
		return ;
	new_b = *stack_a;
	*stack_a = (*stack_a)->next;
	new_b->next = *stack_b;
	*stack_b = new_b;
	ft_printf("pb\n");
}

// int main(void)
// {
//     t_list *stack_a = NULL;
//     t_list *stack_b = NULL;

//     int a = 1, b = 2, c = 3, d = 4;
//     ft_lstadd_front(&stack_b, ft_lstnew(d));
//     ft_lstadd_front(&stack_b, ft_lstnew(c));
//     ft_lstadd_front(&stack_b, ft_lstnew(b));
//     ft_lstadd_front(&stack_b, ft_lstnew(a));

//     ft_printf("Avant pa:\n");
//     print_list(stack_a);
//     print_list(stack_b);

//     pa(&stack_a, &stack_b);
// 	pa(&stack_a, &stack_b);
//     ft_printf("Après pa:\n");
//     print_list(stack_a);
//     print_list(stack_b);
//     return 0;
// }