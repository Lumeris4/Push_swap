/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:05:39 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/16 15:05:10 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(t_list **stack_a, int solo)
{
	t_list	*first;
	t_list	*second;
	int		tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = first->next;
	tmp = first->content;
	first->content = second->content;
	second->content = tmp;
	if (solo)
		ft_printf("sa\n");
}

void	sb(t_list **stack_b, int solo)
{
	t_list	*first;
	t_list	*second;
	int		tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	second = first->next;
	tmp = first->content;
	first->content = second->content;
	second->content = tmp;
	if (solo)
		ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	ft_printf("ss\n");
}

// int main(void)
// {
//     t_list *stack_a = NULL;

//     int a = 1, b = 2, c = 3, d = 4;
//     ft_lstadd_front(&stack_a, ft_lstnew(&d));
//     ft_lstadd_front(&stack_a, ft_lstnew(&c));
//     ft_lstadd_front(&stack_a, ft_lstnew(&b));
//     ft_lstadd_front(&stack_a, ft_lstnew(&a));

//     ft_printf("Avant appel de sa:\n");
//     print_list(stack_a);

//     sa(&stack_a, 1);

//     ft_printf("Apres appel de sa:\n");
//     print_list(stack_a);

//     return 0;
// }