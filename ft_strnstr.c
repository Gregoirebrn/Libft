/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:00:15 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/08 12:04:13 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

char	*ft_strstr(const char *big, char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && little[x] != '\0' && i < len)
		{
			x++;
		}
		if (little[x] == '\0')
			return (big + i);
		i++;
	}
	if (big[0] == '\0' && little[0] == '\0')
		return (big);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char    *s1;
	char    *s2;

	s1 = "";
	s2 = "";
	printf("te =%s \n",strstr(s1,s2));
	printf("my =%s \n",ft_strstr(s1,s2));
}
*/
