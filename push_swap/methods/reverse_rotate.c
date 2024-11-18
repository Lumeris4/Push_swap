/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:15:48 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/11 15:27:41 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rra(t_list **stack_a, int solo)
{
	t_list	*second_last;
	t_list	*last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (solo)
		ft_printf("rra\n");
	last = ft_lstlast(*stack_a);
	second_last = *stack_a;
	while (second_last->next != last)
		second_last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

void	rrb(t_list **stack_b, int solo)
{
	t_list	*second_last;
	t_list	*last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	if (solo)
		ft_printf("rrb\n");
	last = ft_lstlast(*stack_b);
	second_last = *stack_b;
	while (second_last->next != last)
		second_last = second_last->next;
	second_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	ft_printf("rrr\n");
}
// int main(void)
// {
//     t_list *stack_a = NULL;
//     int a = 1, b = 2, c = 3, d = 4;

//     ft_lstadd_front(&stack_a, ft_lstnew(&d));
//     ft_lstadd_front(&stack_a, ft_lstnew(&c));
//     ft_lstadd_front(&stack_a, ft_lstnew(&b));
//     ft_lstadd_front(&stack_a, ft_lstnew(&a));

//     ft_printf("Pile initiale:\n");
//     print_list(stack_a);

//     rra(&stack_a, 1);
//     ft_printf("Après rra:\n");
//     print_list(stack_a);

//     rra(&stack_a, 1);
//     ft_printf("Après une autre rra:\n");
//     print_list(stack_a);

//     return 0;
// }
