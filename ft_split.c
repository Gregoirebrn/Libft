/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:56:26 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/13 10:04:29 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_strncpy(const char *src, char *dest, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_countwds(const char *str, char c)
{
	int	i;
	int	wds;

	wds = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			wds++;
			i++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (wds);
}

char	**ft_clean(char **tab, int x)
{
	int	i;

	i = 0;
	if (x == 0)
		return (tab);
	while (0 < x)
	{
		free(tab[i]);
		x--;
	}
	return (tab);
}

char	**ft_filltab(char const *s, char **tab, char c)
{
	int	i;
	int	size;
	int	x;

	x = 0;
	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			size = i;
			while (s[i] != c && s[i])
				i++;
			tab[x] = malloc(sizeof(char) * (i - size + 1));
			if (tab == NULL)
				return (ft_clean(tab, x));
			ft_strncpy(&s[size], tab[x++], i - size);
		}
		else
			i++;
	}
	tab[x] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		size;
	char	**tab;

	size = ft_countwds(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (ft_clean(tab, 0));
	ft_filltab(s, tab, c);
	return (tab);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	**tab;
	
	tab = ft_split(av[1], av[2][0]);
	ac = 0;
	i = 0;
	while (tab[i])
	{
		printf("%d =%s\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
