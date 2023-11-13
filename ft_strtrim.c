/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:58:07 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/13 13:42:37 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (i);
		else
			i++;
	}
	return (-1);
}

size_t	ft_strend(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start)
	{
		if (ft_strcmp(set, s1[end - 1]) == -1)
			return (end);
		end--;
	}
	return (end);
}

size_t	ft_strstart(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start])
	{
		if (ft_strcmp(set, s1[start]) == -1)
			return (start);
		start++;
	}
	return (start);
}

char	*ft_strldup(char const *s1, size_t len)
{
	char	*trim;
	size_t	i;

	trim = malloc(sizeof(char) * (len + 1));
	if (trim == NULL)
		return (trim);
	i = 0;
	while (i < len)
	{
		trim[i] = s1[i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*trim;

	start = ft_strstart(s1, set);
	end = ft_strend(s1, set, start);
	trim = ft_strldup(&((char *)s1)[start], end - start);
	return (trim);
}
/*
int	main(void)
{
	char	*s1 = "  \t \t \n   \n\n\n\t";

	printf("fak1=%s\n", ft_strtrim(s1, " \n\t"));
}
*/
