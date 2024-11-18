/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:40:30 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/12 09:05:50 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

int	check_double(char **argv)
{
	int	i;
	int	j;
	int	argv_temp;
	int	argv_temp2;

	i = 1;
	while (argv[i])
	{
		argv_temp = ft_atoi(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			argv_temp2 = ft_atoi(argv[j]);
			if (argv_temp2 == argv_temp)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_errors(char **argv)
{
	if (!check_letter_in_number(argv) || !too_long(argv) || !check_double(argv))
		return (0);
	return (1);
}
// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc < 2)
// 		return 0;
// 	printf("%d", check_errors(argv));
// 	return 0;
// }