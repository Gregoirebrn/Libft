/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:40:56 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/14 17:18:05 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_bis_atoi(const char *nptr, int *signe, size_t *i)
{
	while (nptr[*i] == 32 || (nptr[*i] > 8 && nptr[*i] < 14))
		*i += 1;
	if (nptr[*i] == '-' || nptr [*i] == '+')
	{
		if (nptr[*i] == '-')
			*signe *= -1;
		*i += 1;
	}
}

int	ft_atoi(const char *nptr)
{
	unsigned long long	res;
	int					signe;
	size_t				i;

	signe = 1;
	res = 0;
	i = 0;
	ft_bis_atoi(nptr, &signe, &i);
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		if (res > LLONG_MAX && signe < 0)
			return (0);
		if (res > LLONG_MAX)
			return (-1);
		res = res * 10;
		res = res + nptr[i++] - 48;
	}
	if (res > LLONG_MAX && signe < 0)
		return (0);
	if (res > LLONG_MAX)
		return (-1);
	return (((int)res) * signe);
}

//#include <stdio.h>
//#include "stdlib.h"
//
//int main(int ac, char **av)
//{
//	if (ac > 1)
//		printf("MY %d\nOR %d\n", ft_atoi(av[1]), atoi(av[1]));
//}
