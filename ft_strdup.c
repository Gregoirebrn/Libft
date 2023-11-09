/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:55:54 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/09 15:02:01 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (dest == NULL)
		return (dest);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n", strdup(argv[1]));
		printf("%s\n", ft_strdup(argv[1]));
	}
	else
		printf("Pas d'argument?\n");
}
*/