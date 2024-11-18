/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:05:32 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/18 13:59:25 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ra(t_list **stack_a, int solo)
{
	t_list	*last;
	t_list	*first;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (solo)
		ft_printf("ra\n");
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = first;
	first->next = NULL;
}

void	rb(t_list **stack_b, int solo)
{
	t_list	*last;
	t_list	*first;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	if (solo)
		ft_printf("rb\n");
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	last = ft_lstlast(*stack_b);
	last->next = first;
	first->next = NULL;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	ft_printf("rr\n");
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

//     ra(&stack_a, 1);
//     ft_printf("Après ra:\n");
//     print_list(stack_a);

//     ra(&stack_a, 1);
//     ft_printf("Après une autre ra:\n");
//     print_list(stack_a);

//     return 0;
// }