/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:25:20 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/07 18:47:23 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("src %s\n", av[2]);
		ft_memmove(av[1], av[2], 2);
		memmove(av[3], av[2], 2);
		printf("fake %s\n", av[1]);
		printf("reel %s\n", av[3]);

	}
	return (0);
}

