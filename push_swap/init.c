/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:36:47 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/13 16:02:38 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	init_stacka(t_list **stack_a, char **argv)
{
	int	*argv_temp;
	int	i;

	i = 1;
	while (argv[i])
	{
		argv_temp = malloc(sizeof(int));
		if (!argv_temp)
			return ;
		*argv_temp = ft_atoi(argv[i]);
		ft_lstadd_back(stack_a, ft_lstnew(argv_temp));
		i++;
	}
}

void	init_tstack(t_stack *stack, t_list **stack_a)
{
	stack->top = *stack_a;
	stack->size = ft_lstsize(*stack_a);
	stack->min_node = NULL;
	stack->min_value = 0;
	stack->max_node = NULL;
	stack->max_value = 0;
}

int	is_sort(t_list **stack_a)
{
	t_list	*parcours;
	t_list	*valeur_suivante;

	parcours = *stack_a;
	valeur_suivante = parcours->next;
	while (parcours && parcours->next)
	{
		valeur_suivante = parcours->next;
		if (*(int *)(parcours->content) > *(int *)(valeur_suivante->content))
			return (0);
		parcours = parcours->next;
	}
	return (1);
}
// int main(int argc, char **argv)
// {
// 	t_list *stack_a = NULL;
// 	t_stack *stack_a_stack = NULL;
// 	if (argc < 2)
// 		return 0;
// 	init_stacka(&stack_a, argv);
// 	stack_a_stack = malloc(sizeof(t_stack));
// 	if (!stack_a_stack)
//     	return 1;  
// 	init_tstack(stack_a_stack, 'A',&stack_a);
// 	print_list(stack_a);
// 	if (is_sort(&stack_a))
// 		ft_printf("\nliste triee\n");
// 	else
// 	{
// 		ft_printf("\nliste non triee\n");
// 		//mini_sort(&stack_a);
// 		//print_list(stack_a);
// 		//ft_printf("Maintenant elle l'ai \n");
// 	}
// 	ft_min(stack_a_stack);
// 	ft_max(stack_a_stack);
// 	ft_printf("Le min est %d\n",stack_a_stack->min_value);
// 	ft_printf("Le max est %d",stack_a_stack->max_value);
// 	ft_lstclear(&stack_a,free);
// 	return 0;
// }