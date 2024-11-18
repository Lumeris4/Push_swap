/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:05:42 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/18 12:06:02 by lelanglo         ###   ########.fr       */
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
	if (*stack_b)
		(*stack_b)->size--;
	new_a->next = *stack_a;
	*stack_a = new_a;
	if (!*stack_a)
		(*stack_a)->size = 1;
	else
		(*stack_a)->size++;
	ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*new_b;

	if (!*stack_a)
		return ;
	new_b = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->size--;
	new_b->next = *stack_b;
	*stack_b = new_b;
	if (!*stack_b)
		(*stack_b)->size = 1;
	else
		(*stack_b)->size++;
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

//     ft_printf("Après pa:\n");
//     print_list(stack_a);
//     print_list(stack_b);
//     ft_lstclear(&stack_a, free);
//     ft_lstclear(&stack_b, free);

//     return 0;
// }