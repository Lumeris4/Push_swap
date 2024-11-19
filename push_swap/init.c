/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:36:47 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/19 12:36:46 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	init_stack(t_list **stack_a, char **argv, int argc)
{
	int	i;
	int	argv_temp;

	if (argc == 2)
		i = 0;
	else
		i = 1;
	while (argv[i])
	{
		argv_temp = ft_atoi(argv[i]);
		ft_lstadd_back(stack_a, ft_lstnew(argv_temp));
		i++;
	}
	(*stack_a)->size = ft_lstsize(*stack_a);
}

int	is_sort(t_list **stack_a)
{
	t_list	*parcours;
	t_list	*valeur_suivante;

	parcours = *stack_a;
	while (parcours && parcours->next)
	{
		valeur_suivante = parcours->next;
		if (parcours->content > valeur_suivante->content)
			return (0);
		parcours = parcours->next;
	}
	return (1);
}

int	is_sort_descending(t_list **stack_a)
{
	t_list	*parcours;
	t_list	*valeur_suivante;

	parcours = *stack_a;
	while (parcours && parcours->next)
	{
		valeur_suivante = parcours->next;
		if (parcours->content < valeur_suivante->content)
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
