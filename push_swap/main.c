/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:04:42 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/18 14:57:11 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	sort_stack(t_list **stack_a, t_list **stack_b , int argc)
{
	if (argc == 3)
		sa(stack_a, 1);
	else if (argc == 4)
		mini_sort(stack_a);
	else
		turkish_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*tmp;

	stack_a = NULL;
	stack_b = NULL;
	if (!check_errors(argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	init_stack(&stack_a, argv);
	if (!is_sort(&stack_a))
		sort_stack(&stack_a, &stack_b, argc);
	print_list(stack_a);
	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
	return (0);
}


