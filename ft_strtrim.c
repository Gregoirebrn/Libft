/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:58:07 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/10 15:42:55 by grebrune         ###   ########.fr       */
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

size_t	ft_strend(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (((char *)s1)[--end])
	{
		if (ft_strcmp(set, s1[end]) == -1)
			return (end);
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*trim;

	if (set == NULL)
		return ((char *)s1);
	end = ft_strend(s1, set);
	if (end == 0)
		return ((char *)s1);
	start = ft_strstart(s1, set);
	trim = malloc(sizeof(char) * (end - start + 2));
	if (trim == NULL)
		return (trim);
	i = 0;
	while (start <= end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
/*
int main(void)
{
	printf("start=%d\n", start);
	printf("end=%d\n", end);
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";

	printf("fak1=%s\n", ft_strtrim(s1, "1"));
	printf("fak2=%s\n", ft_strtrim(s2, "1"));
}*/
