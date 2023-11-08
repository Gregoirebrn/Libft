/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:56:26 by grebrune          #+#    #+#             */
/*   Updated: 2023/09/28 13:31:37 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_charcmp(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_strncpy(char *src, char *dest, int n)
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

int	ft_strlen(char *str, char *charset)
{
	int	i;
	int	wds;

	wds = 0;
	i = 0;
	while (str[i])
	{
		if (ft_charcmp(str[i], charset) == 0)
		{
			wds++;
			i++;
			while (ft_charcmp(str[i], charset) == 0 && str[i])
				i++;
		}
		else
			i++;
	}
	return (wds);
}

char	**ft_split(char *str, char *charset)
{
	int		x;
	int		i;
	int		size;
	char	**tab;

	x = 0;
	i = 0;
	size = ft_strlen(str, charset);
	tab = malloc(sizeof(char *) * (size + 1));
	while (str[i])
	{
		size = i;
		if (ft_charcmp(str[i], charset) == 0)
		{
			while (str[size] && ft_charcmp(str[size], charset) == 0)
				size++;
			tab[x] = malloc(sizeof(char) * (size - i + 1));
			ft_strncpy(&str[i], tab[x++], size - i);
			i = size;
		}
		else
			i++;
	}
	tab[x] = NULL;
	return (tab);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	**tab;
	
	tab = ft_split(av[1], av[2]);
	ac = 0;
	i = 0;
	while (tab[i])
	{
		printf("%d =%s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
