/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:45:45 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/09 21:48:19 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	len = ft_strlen(s1);
	join = malloc(sizeof(char) * (len + ft_strlen(s2) + 1));
	if (join == NULL)
		return (join);
	while (i < len)
	{
		join[i] = s1[i];
		i++;
	}
	len += ft_strlen(s2);
	while (i < len)
	{
		join[i] = s2[x];
		i++;
		x++;
	}
	join[i] = '\0';
	return (join);
}
/*
int	main(int ac, char **av)
{
	ac = 0;
	printf("%s\n", ft_strjoin(av[1], av[2]));
}*/
