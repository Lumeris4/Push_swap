/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:04:42 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/28 09:08:48 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	for_free(t_list *stack_a, int argc, char **argv)
{
	int		i;
	t_list	*tmp;

	i = 0;
	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
	i = 0;
	if (argc == 2)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (!check_errors(argv, argc))
	{
		write(2, "Error\n", 6);
		for_free(stack_a, argc, argv);
		return (0);
	}
	init_stack(&stack_a, argv, argc);
	if (!is_sort(&stack_a))
		turkish_sort(&stack_a, &stack_b);
	for_free(stack_a, argc, argv);
	return (0);
}
