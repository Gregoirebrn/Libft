/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:00:15 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/10 16:24:03 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && little[x] != '\0' && i < len)
		{
			x++;
		}
		if (little[x] == '\0')
			return ((char *)big + i);
		i++;
	}
	if (big[0] == '\0' && little[0] == '\0')
		return ((char *)big);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "MZIRIBMZE";

	printf("my =%s \n", ft_strnstr(s1, s2, ft_strlen(s2)));
	printf("my =%s \n", strnstr(s1, s2, ft_strlen(s2)));
}*/
