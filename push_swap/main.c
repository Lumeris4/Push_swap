/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:04:42 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/13 16:03:21 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	initialize_stacks(t_list **stack_a, t_stack **stack_a_stack,
				char **argv)
{
	init_stacka(stack_a, argv);
	*stack_a_stack = malloc(sizeof(t_stack));
	if (!(*stack_a_stack))
		return (1);
	init_tstack(*stack_a_stack, stack_a);
	return (0);
}

static void	sort_stack(t_list **stack_a, int argc)
{
	if (argc == 3)
		sa(stack_a, 1);
	else if (argc == 4)
		mini_sort(stack_a);
	else
		ft_printf("pas encore fait");
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_stack	*stack_a_stack;

	stack_a = NULL;
	stack_a_stack = NULL;
	if (argc < 2 || !check_errors(argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (initialize_stacks(&stack_a, &stack_a_stack, argv))
		return (1);
	if (!is_sort(&stack_a))
		sort_stack(&stack_a, argc);
	ft_lstclear(&stack_a, free);
	free(stack_a_stack);
	return (0);
}
