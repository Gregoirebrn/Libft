/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:56:26 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/10 18:26:51 by grebrune         ###   ########.fr       */
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
		if (ft_charcmp(str[i], c) == 0)
		{
			wds++;
			i++;
			while (ft_charcmp(str[i], c) == 0 && str[i])
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
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		i;
	int		size;
	char	**tab;

	x = 0;
	i = 0;
	size = ft_countwds(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (ft_clean(tab, 0));
	while (s[i])
	{
		if (s[i] == c)
		{
			tab[x] = malloc(sizeof(char) * (size - i + 1));
			if (tab == NULL)
				return (ft_clean(tab, x));
			ft_strncpy(&s[i], tab[x++], size - i);
		}
		else
			i++;
		size = i;
	}
	tab[x] = NULL;
	return (tab);
}

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
}
