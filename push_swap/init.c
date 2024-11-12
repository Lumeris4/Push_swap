/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:36:47 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/12 17:08:32 by lelanglo         ###   ########.fr       */
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
// 	if (argc < 2)
// 		return 0;
// 	init_stacka(&stack_a, argv);
// 	print_list(stack_a);
// 	if (is_sort(&stack_a))
// 		ft_printf("\nliste triee\n");
// 	else
// 	{
// 		ft_printf("\nliste non triee\n");
// 		mini_sort(&stack_a);
// 		print_list(stack_a);
// 		ft_printf("Maintenant elle l'ai \n");
// 	}
// 	ft_lstclear(&stack_a, free);
// 	return 0;
// }