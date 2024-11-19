/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   too_long.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:12:28 by lelanglo          #+#    #+#             */
/*   Updated: 2024/11/19 11:21:38 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

static long	ft_atoi_long(const char *nptr)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	too_long(char **argv, int argc)
{
	int		i;
	long	argv_temp;

	if (argc == 2)
		i = 0;
	else
		i = 1;
	while (argv[i])
	{
		argv_temp = ft_atoi_long(argv[i]);
		if (argv_temp < INT_MIN || argv_temp > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}

// int main(int argc,char **argv)
// {
// 	if (argc < 2)
// 		return 0;
// 	ft_printf("%d", too_long(argv));
// 	return 0;
// }
