/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:04:42 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/13 12:20:59 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main(int argc, char **argv)
{
	t_list *stack_a = NULL;
	t_stack *stack_a_stack = NULL;
	if (argc < 2 || !check_errors(argv))
	{
		write(2,"Error\n",6);
		return (0);
	}
	init_stacka(&stack_a, argv);
	stack_a_stack = malloc(sizeof(t_stack));
	if (!stack_a_stack)
    	return 1;  
	init_tstack(stack_a_stack, 'A',&stack_a);
	print_list(stack_a);
	if (!is_sort(&stack_a))
	{
		if (argc == 3)
			sa(&stack_a, 1);
		else if (argc == 4)
			mini_sort(&stack_a);
		else
			ft_printf("pas encore fait");
	}
	ft_lstclear(&stack_a,free);
	free(stack_a_stack);
	return 0;
}
