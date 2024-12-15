/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_letter_in_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:32:48 by lelanglo          #+#    #+#             */
/*   Updated: 2024/12/15 18:53:31 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static int	ft_isdigit_str(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' && ft_isdigit(str[1]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_letter_in_number(char **argv, int argc)
{
	int	i;

	if (argc == 2)
		i = 0;
	else
		i = 1;
	while (argv[i])
	{
		if (!ft_isdigit_str(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

// int main(int argc,char **argv)
// {
// 	if (argc < 2)
// 		return 0;
// 	ft_printf("%d",check_letter_in_number(argv));
// 	return 0;
// }