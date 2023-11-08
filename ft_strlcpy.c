/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:21:39 by grebrune          #+#    #+#             */
/*   Updated: 2023/09/19 10:56:14 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	len_src = 0;
	i = 0;
	while (src[len_src])
	{
		len_src++;
	}
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (len_src);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	src[] = "iurbwhf";
	char	dest[70];
	char	tes[70];

	printf("%d\n", ft_strlcpy(dest, src, 7));
	printf("%s\n", dest);
	printf("%d\n", strlcpy(tes, src, 7));
	printf("%s\n", dest);
	return (0);
}
*/
